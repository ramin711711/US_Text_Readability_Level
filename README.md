# US Text Readability Level

A C program that estimates the US school grade level required to comprehend a given piece of text, using the **Coleman-Liau readability formula**.

## How it works

The program counts letters, words, and sentences in user-input text, then computes:

```
L = average number of letters per 100 words
S = average number of sentences per 100 words
index = 0.0588L - 0.296S - 15.8
```

The resulting index is rounded and mapped to an estimated US grade level (1–16+).

## Example

```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

## Build & run

```bash
make readability
./readability
```

## What this demonstrates

- String parsing and character classification (`isalpha`, `isblank`) without relying on built-in word/sentence splitting
- Implementing a real, published readability formula from its mathematical definition
- Modular structure: separate counting functions (`count_letters`, `count_words`, `count_sentences`) composed in `main`

## Known limitations

- `count_words` assumes single-space-separated words; irregular spacing may affect the count
- Sentence counting is punctuation-based and doesn't handle abbreviations (e.g. "Mr.") as a special case

---
Built as part of Harvard's CS50 coursework.
