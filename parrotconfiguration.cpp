#include "parrotconfiguration.h"

#include <QDomElement>
#include <QDomNode>
#include <QDebug>

ParrotConfiguration::ParrotConfiguration()
{
    folderDownload=QString("Please choose");
    folderCache=QString("Please choose");
    listenPort=QString("41114");

    shares=QVector<DataShare*>();
    friends=QVector<DataFriend*>();
    permissions=QVector<Permission*>();
}

ParrotConfiguration::~ParrotConfiguration() {
    // to write
    ;
}


void ParrotConfiguration::toXml(QXmlStreamWriter *xs) {
    xs->setAutoFormatting(true);
    xs->writeStartDocument();
    xs->writeStartElement("ParrotShareConfiguration");
    xs->writeTextElement("FolderDownload", folderDownload);
    xs->writeTextElement("FolderCache", folderCache);
    xs->writeTextElement("ListenToPort", listenPort);
    xs->writeEndElement(); // ParrotShareConfiguration
    xs->writeEndDocument();
}

bool ParrotConfiguration::fromXml(QDomDocument *dd) {
    QDomElement root = dd->documentElement();
    if( root.tagName() != "ParrotShareConfiguration" )
        return false;
    QDomNode n = root.firstChild();
    while( !n.isNull() ) {
        QDomElement e = n.toElement();
        if( !e.isNull() ) {
            if( e.tagName() == "FolderDownload" ) {
                folderDownload = e.text();
            } else if (e.tagName() == "FolderCache" ) {
                folderCache = e.text();
            } else if (e.tagName() == "ListenToPort" ) {
                listenPort = e.text();
            }
        }
        n = n.nextSibling();
    }
    return true;
}

void ParrotConfiguration::addFriend(QString friendName) {
    if (friendName.isEmpty())
        return;

    DataFriend *df = new DataFriend();
    df->name = friendName;
    // qDebug("time to add friend");
    int s, i;
    i = 0;
    s = friends.size();
    while ( 1 ) {
        if ( i == s ) {
            flm->updating(false,false,i);
            friends.insert(i, df);
            flm->updating(false,true,i);
            break;
        } else if ( friends.at(i)->name == df->name ) {
            delete df;
            return;
        } else if ( friends.at(i)->name > df->name ) {
            flm->updating(false,false,i);
            friends.insert(i, df);
            flm->updating(false,true,i);
            break;
        } else {
            i++;
        }
    }
    // qDebug("done adding friend");
}

void ParrotConfiguration::delFriend(QString friendName) {
    int i = 0;
    int s = friends.size();
    while (i<s) {
        if (friendName == friends.at(i)->name) {
            flm->updating(true,false,i);
            friends.remove(i);
            flm->updating(true,true, i);
            return;
        }
        i++;
    }
}
