/*
 * gundam_simulator.c
 * Implementation file for Gundam Mobile Suit Database & Battle Simulator
 */
#include "gundam_simulator.h"

void initialize_database(mobile_suit suits[]) {
    // RX-78-2 Gundam
    strcpy(suits[0].name, "RX-78-2 Gundam");
    strcpy(suits[0].pilot, "Amuro Ray");
    strcpy(suits[0].faction, "Earth Federation");
    suits[0].armor = 85;
    suits[0].mobility = 90;
    suits[0].firepower = 88;
    suits[0].energy = 92;
    strcpy(suits[0].weapons[0], "Beam Rifle");
    strcpy(suits[0].weapons[1], "Beam Saber");
    strcpy(suits[0].weapons[2], "Shield");
    suits[0].weapon_count = 3;
    suits[0].operational_status = 1;
    
    // MS-06S Zaku II Commander
    strcpy(suits[1].name, "MS-06S Zaku II Commander");
    strcpy(suits[1].pilot, "Char Aznable");
    strcpy(suits[1].faction, "Principality of Zeon");
    suits[1].armor = 70;
    suits[1].mobility = 95;
    suits[1].firepower = 75;
    suits[1].energy = 80;
    strcpy(suits[1].weapons[0], "Zaku Machine Gun");
    strcpy(suits[1].weapons[1], "Heat Hawk");
    strcpy(suits[1].weapons[2], "Bazooka");
    suits[1].weapon_count = 3;
    suits[1].operational_status = 1;
    
    // MSN-04 Sazabi
    strcpy(suits[2].name, "MSN-04 Sazabi");
    strcpy(suits[2].pilot, "Char Aznable");
    strcpy(suits[2].faction, "Neo Zeon");
    suits[2].armor = 95;
    suits[2].mobility = 85;
    suits[2].firepower = 98;
    suits[2].energy = 96;
    strcpy(suits[2].weapons[0], "Beam Shot Rifle");
    strcpy(suits[2].weapons[1], "Beam Saber");
    strcpy(suits[2].weapons[2], "Funnels");
    suits[2].weapon_count = 3;
    suits[2].operational_status = 1;
    
    // RX-93 Nu Gundam
    strcpy(suits[3].name, "RX-93 Nu Gundam");
    strcpy(suits[3].pilot, "Amuro Ray");
    strcpy(suits[3].faction, "Londo Bell");
    suits[3].armor = 90;
    suits[3].mobility = 88;
    suits[3].firepower = 92;
    suits[3].energy = 98;
    strcpy(suits[3].weapons[0], "Beam Rifle");
    strcpy(suits[3].weapons[1], "Beam Saber");
    strcpy(suits[3].weapons[2], "Fin Funnels");
    suits[3].weapon_count = 3;
    suits[3].operational_status = 1;
    
    // MS-09 Dom
    strcpy(suits[4].name, "MS-09 Dom");
    strcpy(suits[4].pilot, "Black Tri-Stars");
    strcpy(suits[4].faction, "Principality of Zeon");
    suits[4].armor = 80;
    suits[4].mobility = 75;
    suits[4].firepower = 82;
    suits[4].energy = 78;
    strcpy(suits[4].weapons[0], "Giant Bazooka");
    strcpy(suits[4].weapons[1], "Heat Saber");
    suits[4].weapon_count = 2;
    suits[4].operational_status = 1;
    
    // RX-79 Gundam Ground Type
    strcpy(suits[5].name, "RX-79 Gundam Ground Type");
    strcpy(suits[5].pilot, "Shiro Amada");
    strcpy(suits[5].faction, "Earth Federation");
    suits[5].armor = 75;
    suits[5].mobility = 78;
    suits[5].firepower = 80;
    suits[5].energy = 82;
    strcpy(suits[5].weapons[0], "100mm Machine Gun");
    strcpy(suits[5].weapons[1], "Beam Saber");
    strcpy(suits[5].weapons[2], "Shield");
    suits[5].weapon_count = 3;
    suits[5].operational_status = 1;
    
    // MS-07B Gouf
    strcpy(suits[6].name, "MS-07B Gouf");
    strcpy(suits[6].pilot, "Ramba Ral");
    strcpy(suits[6].faction, "Principality of Zeon");
    suits[6].armor = 78;
    suits[6].mobility = 82;
    suits[6].firepower = 85;
    suits[6].energy = 80;
    strcpy(suits[6].weapons[0], "Finger Vulcans");
    strcpy(suits[6].weapons[1], "Heat Rod");
    strcpy(suits[6].weapons[2], "Shield");
    suits[6].weapon_count = 3;
    suits[6].operational_status = 1;
    
    // MSM-07 Z'Gok
    strcpy(suits[7].name, "MSM-07 Z'Gok");
    strcpy(suits[7].pilot, "Char Aznable");
    strcpy(suits[7].faction, "Principality of Zeon");
    suits[7].armor = 85;
    suits[7].mobility = 90;
    suits[7].firepower = 78;
    suits[7].energy = 75;
    strcpy(suits[7].weapons[0], "Beam Cannons");
    strcpy(suits[7].weapons[1], "Iron Nail");
    suits[7].weapon_count = 2;
    suits[7].operational_status = 1;
    
    // RX-78NT-1 Gundam Alex
    strcpy(suits[8].name, "RX-78NT-1 Gundam Alex");
    strcpy(suits[8].pilot, "Christina Mackenzie");
    strcpy(suits[8].faction, "Earth Federation");
    suits[8].armor = 88;
    suits[8].mobility = 95;
    suits[8].firepower = 85;
    suits[8].energy = 90;
    strcpy(suits[8].weapons[0], "Beam Rifle");
    strcpy(suits[8].weapons[1], "Beam Saber");
    strcpy(suits[8].weapons[2], "Chobham Armor");
    suits[8].weapon_count = 3;
    suits[8].operational_status = 1;
    
    // MS-18E Kampfer
    strcpy(suits[9].name, "MS-18E Kampfer");
    strcpy(suits[9].pilot, "Mikhail Kaminsky");
    strcpy(suits[9].faction, "Principality of Zeon");
    suits[9].armor = 65;
    suits[9].mobility = 98;
    suits[9].firepower = 92;
    suits[9].energy = 70;
    strcpy(suits[9].weapons[0], "Shotgun");
    strcpy(suits[9].weapons[1], "Panzerfaust");
    strcpy(suits[9].weapons[2], "Chain Mine");
    suits[9].weapon_count = 3;
    suits[9].operational_status = 1;
}

void display_menu() {
    printf("\n=== MOBILE SUIT DATABASE MENU ===\n");
    printf("1. Display All Mobile Suits\n");
    printf("2. Search Mobile Suits\n");
    printf("3. Add Custom Mobile Suit\n");
    printf("4. Battle Simulation\n");
    printf("5. Repair Damaged Suits\n");
    printf("6. Faction Statistics\n");
    printf("7. Exit\n");
    printf("8. About This Program\n");
    printf("Enter your choice (1-8): ");
}

void display_all_suits(mobile_suit suits[], int count) {
    printf("\n=== ALL MOBILE SUITS ===\n");
    printf("%-3s %-25s %-20s %-18s %s\n", "No.", "Mobile Suit", "Pilot", "Faction", "Status");
    printf("------------------------------------------------------------------------\n");
    
    for (int i = 0; i < count; i++) {
        printf("%-3d %-25s %-20s %-18s %s\n", 
               i + 1, 
               suits[i].name, 
               suits[i].pilot, 
               suits[i].faction,
               suits[i].operational_status ? "Operational" : "Destroyed");
    }
    
    printf("\nPress Enter to continue...\n");
    getchar();
}

void display_suit_details(mobile_suit *suit) {
    printf("\n=== MOBILE SUIT DETAILS ===\n");
    printf("Name: %s\n", suit->name);
    printf("Pilot: %s\n", suit->pilot);
    printf("Faction: %s\n", suit->faction);
    printf("Status: %s\n", suit->operational_status ? "Operational" : "Destroyed");
    printf("\n--- Combat Specifications ---\n");
    printf("Armor: %d/100\n", suit->armor);
    printf("Mobility: %d/100\n", suit->mobility);
    printf("Firepower: %d/100\n", suit->firepower);
    printf("Energy: %d/100\n", suit->energy);
    printf("Overall Battle Power: %d\n", calculate_battle_power(suit));
    
    printf("\n--- Weapons ---\n");
    for (int i = 0; i < suit->weapon_count; i++) {
        printf("• %s\n", suit->weapons[i]);
    }
    printf("\n");
}

void search_suits(mobile_suit suits[], int count) {
    char search_term[MAX_NAME_LENGTH];
    int found = 0;
    
    printf("\nEnter search term (name, pilot, or faction): ");
    clear_input_buffer();
    fgets(search_term, sizeof(search_term), stdin);
    search_term[strcspn(search_term, "\n")] = 0; // Remove newline
    
    // Convert to lowercase for case-insensitive search
    for (int i = 0; search_term[i]; i++) {
        search_term[i] = tolower(search_term[i]);
    }
    
    printf("\n=== SEARCH RESULTS ===\n");
    
    for (int i = 0; i < count; i++) {
        char temp_name[MAX_NAME_LENGTH], temp_pilot[MAX_PILOT_LENGTH], temp_faction[MAX_NAME_LENGTH];
        
        // Create lowercase copies for comparison
        strcpy(temp_name, suits[i].name);
        strcpy(temp_pilot, suits[i].pilot);
        strcpy(temp_faction, suits[i].faction);
        
        for (int j = 0; temp_name[j]; j++) temp_name[j] = tolower(temp_name[j]);
        for (int j = 0; temp_pilot[j]; j++) temp_pilot[j] = tolower(temp_pilot[j]);
        for (int j = 0; temp_faction[j]; j++) temp_faction[j] = tolower(temp_faction[j]);
        
        if (strstr(temp_name, search_term) || strstr(temp_pilot, search_term) || strstr(temp_faction, search_term)) {
            display_suit_details(&suits[i]);
            found = 1;
        }
    }
    
    if (!found) {
        printf("No mobile suits found matching '%s'\n", search_term);
    }
    
    printf("Press Enter to continue...\n");
    getchar();
}

void add_custom_suit(mobile_suit suits[], int *count) {
    if (*count >= MAX_SUITS) {
        printf("Database is full! Cannot add more suits.\n");
        return;
    }
    
    printf("\n=== ADD CUSTOM MOBILE SUIT ===\n");
    mobile_suit *new_suit = &suits[*count];
    
    printf("Enter Mobile Suit name: ");
    clear_input_buffer();
    fgets(new_suit->name, sizeof(new_suit->name), stdin);
    new_suit->name[strcspn(new_suit->name, "\n")] = 0;
    
    printf("Enter pilot name: ");
    fgets(new_suit->pilot, sizeof(new_suit->pilot), stdin);
    new_suit->pilot[strcspn(new_suit->pilot, "\n")] = 0;
    
    printf("Enter faction: ");
    fgets(new_suit->faction, sizeof(new_suit->faction), stdin);
    new_suit->faction[strcspn(new_suit->faction, "\n")] = 0;
    
    printf("Enter armor rating (1-100): ");
    new_suit->armor = get_valid_integer(1, 100);
    
    printf("Enter mobility rating (1-100): ");
    new_suit->mobility = get_valid_integer(1, 100);
    
    printf("Enter firepower rating (1-100): ");
    new_suit->firepower = get_valid_integer(1, 100);
    
    printf("Enter energy rating (1-100): ");
    new_suit->energy = get_valid_integer(1, 100);
    
    printf("How many weapons (1-%d): ", MAX_WEAPONS);
    new_suit->weapon_count = get_valid_integer(1, MAX_WEAPONS);
    
    for (int i = 0; i < new_suit->weapon_count; i++) {
        printf("Enter weapon %d: ", i + 1);
        clear_input_buffer();
        fgets(new_suit->weapons[i], sizeof(new_suit->weapons[i]), stdin);
        new_suit->weapons[i][strcspn(new_suit->weapons[i], "\n")] = 0;
    }
    
    new_suit->operational_status = 1;
    (*count)++;
    
    printf("\nMobile Suit '%s' added successfully!\n", new_suit->name);
    printf("Press Enter to continue...\n");
    getchar();
}

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
