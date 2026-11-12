# OMQ - EAL162 - R.272 JUPITER - Nr.26 VECTOR DB - DEEP DIVE!

## OMQ ist Jupiter! OMQ ist EAL162! Grösster Planet = Grösste Datenmenge!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Vector DB = Bedeutung suchen, nicht Wort!
SQL sucht Wort: `CATIA` findet nur `CATIA`. Vector DB sucht Bedeutung: `Auto bauen` findet auch `CATIA`, `Fahrzeug`, `Karosserie`!

### So läuft es - 3 Schritte
| Schritt | Was? | OMQ-Merksatz |
| --- | --- | --- |
| 1. Embedding | Text -> Zahl-Liste, z.B. [0.2, -0.5, 0.9...] | Text wird Zahl! |
| 2. Speichern | Zahlen in Vector DB: Pinecone, Qdrant, Chroma, pgvector | Regal für Zahlen! |
| 3. Suchen | Frage -> Zahl, finde nächste Zahlen | Nähe = Ähnlichkeit! |

### SQL vs Vector DB
| Frage | SQL | Vector DB |
| --- | --- | --- |
| Finde CATIA | Nur wo CATIA steht | Auch wo Auto, CAD, 3D steht |
| Tippfehler? | `CATIAA` = nix gefunden! | `CATIAA` = trotzdem CATIA gefunden! |
| Sprache? | Deutsch != Englisch | Deutsch ~ Englisch, gleiche Bedeutung! |

### OMQ-Beispiel - RAG braucht Vector DB!
Dein OMQ RAG: Frage `Wie schütze ich CAD?` -> Embedding -> Vector DB findet MAIN.MD zu Zero Trust + DLP, auch wenn da nicht CAD steht! Das ist RAG!

### 3 Fehler vermeiden
1. **Chunk zu gross:** 1 Riesen-Datei = 1 Riesen-Vektor = nix gefunden! Klein schneiden!
2. **Falsches Modell:** Embedding-Modell und LLM müssen passen! Nicht mischen!
3. **Kein Filter:** Erst Vector-Suche, dann Filter: Nur EAL158-162, nicht alles!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL162 R.272 JUPITER - Nr.26 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
