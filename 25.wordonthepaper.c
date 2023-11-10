// 25. C. Word on the Paper (1850)
#include <stdio.h>
#include <string.h>
void findVerticalWord(char grid[8][8], char word[9])
{
    int word_length = 0;
    for (int col = 0; col < 8; col++)
    {
        for (int row = 0; row < 8; row++)
        {
            if (grid[row][col] != '.')
            {
                word[word_length] = grid[row][col];
                word_length++;
            }
        }
    }
    word[word_length] = '\0';
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char grid[8][8];
        char word[9];
        for (int i = 0; i < 8; i++)
        {
            scanf("%s", grid[i]);
        }
        findVerticalWord(grid, word);
        printf("%s\n", word);
    }
  return 0;}
  