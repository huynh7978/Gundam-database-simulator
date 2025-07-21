/*
 * gundam_simulator.c
 * Implementation file for Gundam Mobile Suit Database & Battle Simulator
 */
#include "gundam_simulator.h"

int main() {
    mobile_suit suits[MAX_SUITS];
    int suit_count = 0;
    int choice;
    
    printf("==================================================\n");
    printf("    GUNDAM MOBILE SUIT DATABASE & SIMULATOR\n");
    printf("==================================================\n");
    printf("Welcome to the Universal Century Database!\n\n");
    
    // Initialize with pre-loaded Gundam data
    initialize_database(suits);
    suit_count = 10; // Number of pre-loaded suits
    
    srand(time(NULL)); // Seed for random number generation
    
    while (1) {
        display_menu();
        choice = get_valid_integer(1, 8);
        
        switch (choice) {
            case 1:
                display_all_suits(suits, suit_count);
                break;
            case 2:
                search_suits(suits, suit_count);
                break;
            case 3:
                add_custom_suit(suits, &suit_count);
                break;
            case 4:
                battle_simulation(suits, suit_count);
                break;
            case 5:
                repair_suits(suits, suit_count);
                break;
            case 6:
                display_faction_stats(suits, suit_count);
                break;
            case 7:
                printf("\nThanks for using the Gundam Database!\n");
                printf("May the Force... wait, wrong universe! o7\n");
                exit(0);
            case 8:
                display_program_info();
                break;
        }
    }
    
    return 0;
}