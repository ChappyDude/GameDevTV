#include <cstdio>
#include <cstdint>
#include <string>

using namespace std;

#define DECK_SIZE (52)

enum card_suit : uint8_t {
    SPADE,
    HEART,
    DIAMOND,
    CLUB,
};

enum card_rank : uint8_t {
    ACE = 1,
    DEUCE = 2,
    JACK = 11,
    QUEEN,
    KING,
};

const char * ace = "Ace";
const char * jack = "Jack";
const char * queen = "Queen";
const char * king = "King";
const char * deuce = "Deuce";
const char * spades = "Spades";
const char * hearts = "Hearts";
const char * diamond = "Diamonds";
const char * club = "club";

struct card
{
    uint8_t rank;
    uint8_t suit;
};

card deck[DECK_SIZE] = {
    {ACE, SPADE}, {DEUCE, SPADE}, {3, SPADE}, {4, SPADE}, {5, SPADE}, {6, SPADE}, {7, SPADE}, {8, SPADE}, {9, SPADE}, {10, SPADE}, {JACK, SPADE}, {QUEEN, SPADE}, {KING, SPADE},
    {ACE, HEART}, {DEUCE, HEART}, {3, HEART}, {4, HEART}, {5, HEART}, {6, HEART}, {7, HEART}, {8, HEART}, {9, HEART}, {10, HEART}, {JACK, HEART}, {QUEEN, HEART}, {KING, HEART},
    {ACE, DIAMOND}, {DEUCE, DIAMOND}, {3, DIAMOND}, {4, DIAMOND}, {5, DIAMOND}, {6, DIAMOND}, {7, DIAMOND}, {8, DIAMOND}, {9, DIAMOND}, {10, DIAMOND}, {JACK, DIAMOND}, {QUEEN, DIAMOND}, {KING, DIAMOND},
    {ACE, CLUB}, {DEUCE, CLUB}, {3, CLUB}, {4, CLUB}, {5, CLUB}, {6, CLUB}, {7, CLUB}, {8, CLUB}, {9, CLUB}, {10, CLUB}, {JACK, CLUB}, {QUEEN, CLUB}, {KING, CLUB},
};

void print_non_int_rank(uint8_t rank)
{
    switch (rank)
    {
    case ACE:
        printf("%s of ", ace);
        break;

    case JACK:
        printf("%s of ", jack);
        break;

    case QUEEN:
        printf("%s of ", queen);
        break;

    case KING:
        printf("%s of ", king);
        break;

    case DEUCE:
        printf("%s of ", king);
        break;

    default:
        break;
    }
}

void print_suit(uint8_t suit)
{
    switch (suit)
    {
    case SPADE:
        printf("%s\n", spades);
        break;
    case HEART:
        printf("%s\n", hearts);
        break;
    case DIAMOND:
        printf("%s\n", diamond);
        break;
    case CLUB:
        printf("%s\n", club);
        break;
    default:
        break;
    }
}

void print_card(const card & c)
{
    bool int_card = (c.rank >=3) && (c.rank <= 10);
    if (int_card)
    {
        printf("%d of ", c.rank);
    }
    else
    {
        print_non_int_rank(c.rank);
    }
    print_suit(c.suit);
}

int main()
{
    long int count = sizeof(deck) / sizeof(card);
    printf("count: %ld cards\n", count);

    for (card c : deck)
    {
        print_card(c);
    }

    return 0;
}