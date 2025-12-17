#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string tx);
int count_words(string tx);
int count_sentences(string tx);
void grade(float index);

int main(void)
{
    float index;
    float L;
    float S;
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    L = (letters * 100.0) / words;
    S = (sentences * 100.0) / words;

    index = 0.0588 * L - 0.296 * S - 15.8;

    grade(round(index));
}

int count_letters(string tx)
{
    int nm_of_letters = 0;
    for (int i = 0, n = strlen(tx); i < n; i++)
    {
        if (isalpha(tx[i]))
        {
            nm_of_letters++;
        }
    }
    return nm_of_letters;
}

int count_words(string tx)
{
    int nm_of_words = 1;
    for (int i = 0, n = strlen(tx); i < n; i++)
    {
        if (isblank(tx[i]))
        {
            nm_of_words++;
        }
    }
    return nm_of_words;
}

int count_sentences(string tx)
{
    int nm_of_sentences = 0;
    for (int i = 0, n = strlen(tx); i < n; i++)
    {
        if (tx[i] == '.' || tx[i] == '?' || tx[i] == '!')
        {
            nm_of_sentences++;
        }
    }
    return nm_of_sentences;
}

void grade(float index)
{
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index < 2 && index >= 1)
    {
        printf("Grade 1\n");
    }
    else if (index < 3 && index >= 2)
    {
        printf("Grade 2\n");
    }
    else if (index < 4 && index >= 3)
    {
        printf("Grade 3\n");
    }
    else if (index < 5 && index >= 4)
    {
        printf("Grade 4\n");
    }
    else if (index < 6 && index >= 5)
    {
        printf("Grade 5\n");
    }
    else if (index < 7 && index >= 6)
    {
        printf("Grade 6\n");
    }
    else if (index < 8 && index >= 7)
    {
        printf("Grade 7\n");
    }
    else if (index < 9 && index >= 8)
    {
        printf("Grade 8\n");
    }
    else if (index < 10 && index >= 9)
    {
        printf("Grade 9\n");
    }
    else if (index < 11 && index >= 10)
    {
        printf("Grade 10\n");
    }
    else if (index < 12 && index >= 11)
    {
        printf("Grade 11\n");
    }
    else if (index < 13 && index >= 12)
    {
        printf("Grade 12\n");
    }
    else if (index < 14 && index >= 13)
    {
        printf("Grade 13\n");
    }
    else if (index < 15 && index >= 14)
    {
        printf("Grade 14\n");
    }
    else if (index < 16 && index >= 15)
    {
        printf("Grade 15\n");
    }
    else if (index == 16)
    {
        printf("Grade 16\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}
