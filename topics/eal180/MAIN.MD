# OMQ - EAL180 - R.290 GENAI - Nr.44 LLM vs SLM vs LRM vs VLM - DEEP DIVE!

## OMQ ist GenAI! OMQ ist EAL180! 4 Modelle, 4 Jobs - falsches Modell = teuer + langsam!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### 4 Modelle in 1 Satz!
LLM = Gross + Alles-Könner! SLM = Klein + Schnell + Privat! LRM = Denkt nach, bevor es antwortet! VLM = Sieht Bilder + Text!


### Die 4 im Vergleich
| Modell | Was? | Beispiele | Wann? |
| --- | --- | --- | --- |
| LLM | Large Language Model - 100B+ Parameter, Cloud API | GPT, Claude, Gemini, Mistral Large | Offene Fragen, Draft, RAG Chat |
| SLM | Small Language Model - 1-14B, läuft auf 1 GPU / Laptop | Phi, Gemma, Llama 3.2 3B, Mistral 7B | Viele kleine Tasks, Privat, On-Prem, Schnell |
| LRM | Large Reasoning Model - Denkt in Schritten, Check! | OpenAI o-series, DeepSeek-R1, Claude Thinking | Mathe, Code, Planung, Hohe Genauigkeit |
| VLM | Vision Language Model - Bild + Text! | GPT-4o, Gemini, Qwen-VL, LLaVA | Rechnungen, Formulare, Charts, Screenshots |

### Routing-Regel - Cheap-First!
**Incoming Request -> Model Router -> Frage: Was braucht es?**
| Input? | Nimm! |
| --- | --- |
| Bild / Scan / Screenshot dabei? | VLM! |
| Mehr-Schritt Logik, Mathe, Planung? | LRM! |
| Eng, viel Volumen, muss On-Prem bleiben? | SLM! |
| Offen, braucht breites Wissen? | LLM! |

### OMQ-Beispiel - Deine Screenshots = VLM-Job!
Du hast mir 6 Bilder geschickt! Text-Modell allein = Blind! VLM liest Bild -> Text -> Ich baue EAL180!
Dein OMQ-Script = SLM-Job! Klein, schnell, oft! Kein 100B-Modell für `print()` nötig!

### 3 Fehler vermeiden
1. **Immer LLM:** Millionen simple Calls mit LLM = Teuer! SLM für Routine!
2. **LRM für Chat:** LRM für 'Hallo' = Langsam + Teuer! LRM nur für Denken!
3. **Kein Router:** Alles in 1 Modell = Kompromiss! Route: Cheap-First, Eskalieren nur wenn nötig!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL180 R.290 GENAI - Nr.44 von NEUE SERIE

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
