# OMQ - EAL166 - R.276 PLUTO - Nr.30 SQL vs NoSQL - DEEP DIVE!

## OMQ ist Pluto! OMQ ist EAL166! Klein, aber wichtig - wie gute Datenbank-Wahl!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### SQL vs NoSQL = Tabelle vs Schublade!
SQL = Alles in Tabelle, festes Muster! NoSQL = Alles in Schublade, jedes Ding anders!

### SQL vs NoSQL - Tabelle
|  | SQL | NoSQL |
| --- | --- | --- |
| Form | Tabelle, festes Schema | Dokument / Key-Value / Graph, flexibel |
| Beispiel | PostgreSQL, MySQL | MongoDB, Redis, Neo4j |
| Frage | SELECT * FROM eal WHERE nr=166 | db.eal.find({nr:166}) |
| Gut für | Geld, Bestellung, alles muss stimmen | Chat, Katalog, schnell + viel |

### Wann was?
| Nimm SQL wenn... | Nimm NoSQL wenn... |
| --- | --- |
| Geld / Rechnung: 1 Cent darf nicht fehlen! | 1 Mio User schreiben gleichzeitig! |
| Alles hat gleiche Form: Name, Datum, Preis | Jedes Ding anders: 1 Auto hat 3 Räder, 1 hat 5! |
| Beziehungen wichtig: Wer hat was bestellt? | Beziehungen egal, nur schnell lesen! |

### OMQ-Beispiel
SQL: `SELECT * FROM it_concepts WHERE nr=30;` = Sauber, 1 Antwort!
NoSQL: `db.it_concepts.find({thema: 'SQL'})` = Schnell, auch wenn 1 Doc mehr Felder hat!
Dein OMQ: MAIN.MD Dateien = NoSQL-Denken! Jede Datei anders lang, trotzdem suchbar!

### 3 Fehler vermeiden
1. **Alles NoSQL:** Geld in NoSQL ohne Transaktion = Geld weg! SQL für Geld!
2. **Alles SQL:** 1 Mio Chat-Nachrichten in SQL = langsam! NoSQL für Chat!
3. **Kein Index:** Ohne Index sucht DB alles! Index auf nr, thema setzen!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL166 R.276 PLUTO - Nr.30 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
