/*
 * This file was generated by dbusidl2cpp version 0.4
 * when processing input file org.kde.konsole.xml
 *
 * dbusidl2cpp is Copyright (C) 2006 Trolltech AS. All rights reserved.
 *
 * This is an auto-generated file.
 */

#ifndef KONSOLEADAPTOR_H_144501149585213
#define KONSOLEADAPTOR_H_144501149585213

#include <QtCore/QObject>
#include <QtCore/QMetaObject>
#include <QtCore/QVariant>
#include <dbus/qdbus.h>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Adaptor class for interface org.kde.konsole
 */
class KonsoleAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.konsole")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.konsole\" >\n"
"    <method name=\"sessionCount\" >\n"
"      <arg direction=\"out\" type=\"i\" />\n"
"    </method>\n"
"    <method name=\"currentSession\" >\n"
"      <arg direction=\"out\" type=\"s\" />\n"
"    </method>\n"
"    <method name=\"newSession\" >\n"
"      <arg direction=\"out\" type=\"s\" />\n"
"    </method>\n"
"    <method name=\"newSession\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"type\" />\n"
"      <arg direction=\"out\" type=\"s\" />\n"
"    </method>\n"
"    <method name=\"sessionId\" >\n"
"      <arg direction=\"in\" type=\"i\" name=\"position\" />\n"
"      <arg direction=\"out\" type=\"s\" />\n"
"    </method>\n"
"    <method name=\"activateSession\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"sessionId\" />\n"
"    </method>\n"
"    <method name=\"nextSession\" />\n"
"    <method name=\"prevSession\" />\n"
"    <method name=\"moveSessionLeft\" />\n"
"    <method name=\"moveSessionRight\" />\n"
"    <method name=\"fullScreen\" >\n"
"      <arg direction=\"out\" type=\"b\" />\n"
"    </method>\n"
"    <method name=\"setFullScreen\" >\n"
"      <arg direction=\"in\" type=\"b\" name=\"on\" />\n"
"    </method>\n"
"    <method name=\"reparseConfiguration\" />\n"
"  </interface>\n"
        "")
public:
    KonsoleAdaptor(QObject *parent);
    virtual ~KonsoleAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void activateSession(const QString &sessionId);
    QString currentSession();
    bool fullScreen();
    void moveSessionLeft();
    void moveSessionRight();
    QString newSession(const QString &type);
    QString newSession();
    void nextSession();
    void prevSession();
    void reparseConfiguration();
    int sessionCount();
    QString sessionId(int position);
    void setFullScreen(bool on);
Q_SIGNALS: // SIGNALS
};

#endif
