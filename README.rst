Ticket Event
=====================


Funktionale Anforderungen
-------------------------

Implementieren Sie ein Programm (Kommandozeilentool), zum Kauf von Tickets für verschiedene Arten von Events (Konzerte, Sportveranstaltungen, etc.). Der Nutzer soll dabei die Möglichkeit haben, sich die verfügbaren Events auflisten zu lassen und danach zu entscheiden für welches Event Tickets gekauft werden sollen. Folgende Arten von Events mit den jeweiligen Attributen existieren:

- Konzert
    - Datum und Uhrzeit
    - Künstler
    - Ort
    - Ticketpreis
    - Anzahl verfügbarer Tickets
- Festival
    - Startdatum
    - Enddatum
    - Name
    - Ort
    - Ticketpreis
    - Anzahl verfügbarer Tickets
- Teamsport Event
    - Mannschaft A
    - Mannschaft B
    - Sportart
    - Datum und Uhrzeit
    - Ort
    - Ticketpreis
    - Anzahl verfügbarer Tickets
- Sonstiges
    - Beschreibung
    - Datum und Uhrzeit
    - Ort
    - Ticketpreis
    - Anzahl verfügbarer Tickets


Die Auflistung der Events soll alle Attribute des jeweiligen Events anzeigen. Anschließend wird der Nutzer gefragt für welches Event er Tickets erwerben möchte und wie viele. Abschließend wird eine kurze Zusammenfassung des Kaufs dargestellt, in der nochmals die Details zum Event und der Gesamtpreis dargestellt werden. Das verfügbare Ticketkontingent soll anschließend um die Anzahl der erworbenen Tickets reduziert werden.

Die zur Verfügung stehenden Events und deren Attribute sollen in einer Datei mit beliebigen Format (z.B. CSV, JSON, etc.) gespeichert werden und zu Programmstart eingelesen werden. Nach Abschluss eines Kaufs soll die Datei aktualisiert werden, sodass beim nächsten Programmstart die aktuelle Eventliste zur Verfügung steht.

Ungültige Benutzereingaben, z.B. eine ungültige Anzahl an Tickets oder die Auswahl eines Event, das nicht existiert, sollen durch das Programm abgefangen werden und mit einer Fehlermeldung quittiert werden.

Zusatzaufgabe
^^^^^^^^^^^^^

Die letzten 10% des Ticketkontingents sollen zum doppelten Preis angeboten werden.

Technische Anforderungen
------------------------
- Implementierung in modernem C++
- Buildmanagement mit CMake
- Fehlerbehandlung mit Hilfe von Exceptions
- Verwendung folgender Technologien an geeigneten Stellen
    - Vererbung und virtuelle Funktionen
    - Container aus der C++ Standardbibliothek
    - Smartpointer
- Der Quelltext des Programms sollte folgende Eigenschaften vorweisen:
    - Sinnvolle Aufteilung in verschiedene Header und Sourcedateien
    - Klassen-, Variablen- und Funktionsbezeichner mit aussagekräftigen Namen auf Englisch
    - Einheitlicher Klammerstil (z.B. K&R)
    - Verwendung von CamelCase oder SnakeCase bei Bezeichnern


Beispielablauf
--------------

.. image:: resources/activity_diagram.drawio.png

