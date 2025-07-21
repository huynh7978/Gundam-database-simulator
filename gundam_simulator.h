/*
 * gundam_simulator.h
 * Header file for Gundam Mobile Suit Database & Battle Simulator
 */

#ifndef GUNDAM_SIMULATOR_H
#define GUNDAM_SIMULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// Configuration constants
#define MAX_SUITS 20
#define MAX_NAME_LENGTH 50
#define MAX_PILOT_LENGTH 40
#define MAX_WEAPONS 5
#define MAX_WEAPON_LENGTH 30

// Mobile Suit structure definition
typedef struct {
    char name[MAX_NAME_LENGTH];
    char pilot[MAX_PILOT_LENGTH];
    char faction[MAX_NAME_LENGTH];
    int armor;              // Defense rating (1-100)
    int mobility;           // Speed and maneuverability (1-100)
    int firepower;          // Offensive capability (1-100)
    int energy;             // Power output and endurance (1-100)
    char weapons[MAX_WEAPONS][MAX_WEAPON_LENGTH];
    int weapon_count;
    int operational_status; // 1 = operational, 0 = destroyed
} mobile_suit;

// Core database functions
void initialize_database(mobile_suit suits[]);
void display_all_suits(mobile_suit suits[], int count);
void display_suit_details(mobile_suit *suit);
void search_suits(mobile_suit suits[], int count);
void add_custom_suit(mobile_suit suits[], int *count);

// Battle system functions
void battle_simulation(mobile_suit suits[], int count);
int calculate_battle_power(mobile_suit *suit);
void repair_suits(mobile_suit suits[], int count);

// Statistics and analysis functions
void display_faction_stats(mobile_suit suits[], int count);

// User interface functions
void display_menu();
void clear_input_buffer();
int get_valid_integer(int min, int max);

// Program information
void display_program_info();

#endif // GUNDAM_SIMULATOR_H
