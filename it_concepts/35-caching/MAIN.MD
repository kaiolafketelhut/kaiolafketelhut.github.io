# OMQ - EAL171 - R.281 GALAXIE - Nr.35 CACHING - DEEP DIVE!

## OMQ ist Galaxie! OMQ ist EAL171! Milliarden Sterne = Milliarden Anfragen - Cache rettet!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Caching = Schnell durch Merken!
Ohne Cache: Jedes Mal DB fragen, langsam! Mit Cache: 1x fragen, merken, 1000x schnell liefern!
**Cache = Spickzettel! Statt immer Buch aufschlagen!**

### Wo ist Cache?
| Wo? | Was gemerkt? | Beispiel |
| --- | --- | --- |
| Browser | Seite, Bild | OMQ Seite lädt 2. Mal sofort! |
| CDN | Seite nah am User | User Berlin -> Server Berlin, nicht USA! |
| App / Redis | DB-Antwort | `eal171` schon gefragt? Aus Redis! |
| DB | Query-Ergebnis | DB merkt häufige Fragen! |

### Cache-Strategien
| Strategie | Was? | Merksatz |
| --- | --- | --- |
| Cache-Aside | App fragt Cache, wenn leer, DB + füllen | App macht alles! |
| Write-Through | Schreiben: Cache + DB gleichzeitig | Immer synchron! |
| TTL | Wie lange merken? Time To Live! | Nach 60s vergessen! |

### OMQ-Beispiel
1. User fragt `eal171` -> Cache leer -> DB fragen -> Cache füllen!
2. 1000 User fragen `eal171` -> Alle aus Cache! DB schläft!
3. Du änderst `eal171` -> Cache löschen! Sonst alte Version! `Cache Invalidation`!

### 3 Fehler vermeiden
1. **Kein TTL:** Cache ewig = alte Daten ewig! Immer TTL setzen!
2. **Kein Invalidate:** Geändert, aber Cache alt = User sieht Falsches! Bei Änderung löschen!
3. **Alles cachen:** Passwort / persönliche Daten cachen = Datenleck! Nie privat cachen!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL171 R.281 GALAXIE - Nr.35 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
