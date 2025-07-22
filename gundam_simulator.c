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
        fgets(new_suit->weapons[i], sizeof(new_suit->weapons[i]), stdin);
        new_suit->weapons[i][strcspn(new_suit->weapons[i], "\n")] = 0;
    }
    
    new_suit->operational_status = 1;
    (*count)++;
    
    printf("\nMobile Suit '%s' added successfully!\n", new_suit->name);
    printf("Press Enter to continue...\n");
    getchar();
}

void battle_simulation(mobile_suit suits[], int count) {
    if (count < 2) {
        printf("Need at least 2 mobile suits for battle!\n");
        return;
    }
    
    printf("\n=== BATTLE SIMULATION ===\n");
    printf("Available Mobile Suits:\n");
    
    int operational_count = 0;
    for (int i = 0; i < count; i++) {
        if (suits[i].operational_status) {
            printf("%d. %s (Pilot: %s) - Battle Power: %d\n", 
                   i + 1, suits[i].name, suits[i].pilot, calculate_battle_power(&suits[i]));
            operational_count++;
        }
    }
    
    if (operational_count < 2) {
        printf("Need at least 2 operational mobile suits for battle!\n");
        return;
    }
    
    printf("\nSelect first combatant (1-%d): ", count);
    int fighter1 = get_valid_integer(1, count) - 1;
    
    printf("Select second combatant (1-%d): ", count);
    int fighter2 = get_valid_integer(1, count) - 1;
    
    if (fighter1 == fighter2) {
        printf("Cannot battle the same mobile suit!\n");
        return;
    }
    
    if (!suits[fighter1].operational_status || !suits[fighter2].operational_status) {
        printf("Both mobile suits must be operational!\n");
        return;
    }
    
    printf("\n=== BATTLE COMMENCE ===\n");
    printf("%s (%s) VS %s (%s)\n", 
           suits[fighter1].name, suits[fighter1].pilot,
           suits[fighter2].name, suits[fighter2].pilot);
    
    int power1 = calculate_battle_power(&suits[fighter1]);
    int power2 = calculate_battle_power(&suits[fighter2]);
    
    // Add some randomness to the battle
    int random_factor1 = rand() % 21 - 10; // -10 to +10
    int random_factor2 = rand() % 21 - 10;
    
    int final_power1 = power1 + random_factor1;
    int final_power2 = power2 + random_factor2;
    
    printf("\nBattle Power: %s = %d (+%d bonus)\n", suits[fighter1].name, power1, random_factor1);
    printf("Battle Power: %s = %d (+%d bonus)\n", suits[fighter2].name, power2, random_factor2);
    
    printf("\nBattle in progress");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        // Simple delay simulation
        for (int j = 0; j < 100000000; j++);
    }
    printf("\n");
    
    if (final_power1 > final_power2) {
        printf("\n🏆 VICTORY: %s wins!\n", suits[fighter1].name);
        suits[fighter2].operational_status = 0; // Mark as destroyed
        suits[fighter2].armor = 0;
        suits[fighter2].energy = 0;
        printf("💥 %s has been destroyed!\n", suits[fighter2].name);
    } else if (final_power2 > final_power1) {
        printf("\n🏆 VICTORY: %s wins!\n", suits[fighter2].name);
        suits[fighter1].operational_status = 0;
        suits[fighter1].armor = 0;
        suits[fighter1].energy = 0;
        printf("💥 %s has been destroyed!\n", suits[fighter1].name);
    } else {
        printf("\n🤝 It's a draw! Both suits are heavily damaged.\n");
        suits[fighter1].armor /= 2;
        suits[fighter2].armor /= 2;
        suits[fighter1].energy /= 2;
        suits[fighter2].energy /= 2;
    }
    
    printf("\nPress Enter to continue...\n");
    getchar();
}

void repair_suits(mobile_suit suits[], int count) {
    printf("\n=== REPAIR FACILITY ===\n");
    
    int damaged_count = 0;
    for (int i = 0; i < count; i++) {
        if (!suits[i].operational_status || suits[i].armor < 80 || suits[i].energy < 80) {
            printf("%d. %s - Status: %s (Armor: %d, Energy: %d)\n", 
                   i + 1, suits[i].name, 
                   suits[i].operational_status ? "Damaged" : "Destroyed",
                   suits[i].armor, suits[i].energy);
            damaged_count++;
        }
    }
    
    if (damaged_count == 0) {
        printf("All mobile suits are in perfect condition!\n");
        return;
    }
    
    printf("\nSelect suit to repair (1-%d, 0 to repair all): ", count);
    int choice = get_valid_integer(0, count);
    
    if (choice == 0) {
        // Repair all suits
        for (int i = 0; i < count; i++) {
            suits[i].operational_status = 1;
            suits[i].armor = (suits[i].armor < 80) ? 85 : suits[i].armor;
            suits[i].energy = (suits[i].energy < 80) ? 85 : suits[i].energy;
        }
        printf("All mobile suits have been repaired!\n");
    } else {
        // Repair specific suit
        mobile_suit *suit = &suits[choice - 1];
        suit->operational_status = 1;
        suit->armor = (suit->armor < 80) ? 85 : suit->armor;
        suit->energy = (suit->energy < 80) ? 85 : suit->energy;
        printf("%s has been repaired and is now operational!\n", suit->name);
    }
    
    printf("Press Enter to continue...\n");
    getchar();
}

void display_faction_stats(mobile_suit suits[], int count) {
    printf("\n=== FACTION STATISTICS ===\n");
    
    // Count by faction
    char factions[10][MAX_NAME_LENGTH];
    int faction_counts[10] = {0};
    int faction_power[10] = {0};
    int faction_operational[10] = {0};
    int unique_factions = 0;
    
    for (int i = 0; i < count; i++) {
        int found = 0;
        for (int j = 0; j < unique_factions; j++) {
            if (strcmp(factions[j], suits[i].faction) == 0) {
                faction_counts[j]++;
                faction_power[j] += calculate_battle_power(&suits[i]);
                if (suits[i].operational_status) faction_operational[j]++;
                found = 1;
                break;
            }
        }
        if (!found && unique_factions < 10) {
            strcpy(factions[unique_factions], suits[i].faction);
            faction_counts[unique_factions] = 1;
            faction_power[unique_factions] = calculate_battle_power(&suits[i]);
            if (suits[i].operational_status) faction_operational[unique_factions] = 1;
            unique_factions++;
        }
    }
    
    printf("%-20s %s %s %s\n", "Faction", "Total", "Operational", "Avg Power");
    printf("--------------------------------------------------------\n");
    
    for (int i = 0; i < unique_factions; i++) {
        int avg_power = faction_counts[i] > 0 ? faction_power[i] / faction_counts[i] : 0;
        printf("%-20s %5d %11d %9d\n", 
               factions[i], faction_counts[i], faction_operational[i], avg_power);
    }
    
    printf("\nPress Enter to continue...\n");
    getchar();
}

int calculate_battle_power(mobile_suit *suit) {
    if (!suit->operational_status) return 0;
    
    // Weighted calculation: armor=25%, mobility=20%, firepower=35%, energy=20%
    return (suit->armor * 25 + suit->mobility * 20 + suit->firepower * 35 + suit->energy * 20) / 100;
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int get_valid_integer(int min, int max) {
    int value;
    while (1) {
        if (scanf("%d", &value) == 1 && value >= min && value <= max) {
            clear_input_buffer();
            return value;
        } else {
            printf("Please enter a valid number between %d and %d: ", min, max);
            clear_input_buffer();
        }
    }
}

void display_program_info() {
    printf("\n=== ABOUT THIS PROGRAM ===\n");
    printf("Gundam Mobile Suit Database & Battle Simulator v1.0\n");
    printf("A comprehensive C programming demonstration project\n\n");

    printf("🎯 Computer Science Concepts Demonstrated:\n");
    printf("• Custom data structures and typedef usage\n");
    printf("• Dynamic array management and bounds checking\n");
    printf("• String manipulation and case-insensitive searching\n");
    printf("• Menu-driven user interface design\n");
    printf("• Input validation and error handling\n");
    printf("• Mathematical calculations and algorithms\n");
    printf("• Modular programming with header files\n");
    printf("• Memory management best practices\n");
    printf("• Random number generation for simulation\n");
    printf("• Statistical analysis and data aggregation\n\n");
    
    printf("🔧 Technical Features:\n");
    printf("• Robust input validation preventing buffer overflows\n");
    printf("• Case-insensitive search across multiple fields\n");
    printf("• Weighted battle power calculation system\n");
    printf("• Real-time battle simulation with randomization\n");
    printf("• Faction-based statistical analysis\n");
    printf("• Damage system with repair mechanics\n\n");
    
    printf("📁 Project Structure:\n");
    printf("• gundam_simulator.h - Header with declarations\n");
    printf("• gundam_simulator.c - Implementation file\n");
    printf("• Clean separation of interface and implementation\n\n");
    
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
