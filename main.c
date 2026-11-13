
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char farmerName[100];
    char villageName[100];
    char ageInput[20];
    int age;

    printf("\n====================================\n");
    printf("          AGRIMITRA AI\n");
    printf("     SMART FARMING ASSISTANT\n");
    printf("====================================\n");

    printf("\nDeveloped by: Pruthviraj\n");

    printf("\n----- FARMER REGISTRATION -----\n");

    printf("Enter farmer name: ");
    fgets(farmerName, sizeof(farmerName), stdin);
    farmerName[strcspn(farmerName, "\n")] = '\0';

    printf("Enter farmer age: ");
    if (fgets(ageInput, sizeof(ageInput), stdin) == NULL ||
        sscanf(ageInput, "%d", &age) != 1 ||
        age < 1 || age > 120)
    {
        printf("\nInvalid age. Please try again.\n");
        return 1;
    }

    printf("Enter village name: ");
    fgets(villageName, sizeof(villageName), stdin);
    villageName[strcspn(villageName, "\n")] = '\0';

    printf("\n====================================\n");
    printf("       REGISTRATION SUCCESS!\n");
    printf("====================================\n");

    printf("Farmer Name : %s\n", farmerName);
    printf("Farmer Age  : %d\n", age);
    printf("Village     : %s\n", villageName);

    printf("\nWelcome to AgriMitra AI!\n");
    
    int soil, season;

    printf("\n===== CROP RECOMMENDATION =====\n");

    printf("\nSelect Soil Type:\n");
    printf("1. Black Soil\n");
    printf("2. Red Soil\n");
    printf("3. Alluvial Soil\n");

    printf("Enter choice: ");
    scanf("%d", &soil);

    printf("\nSelect Season:\n");
    printf("1. Kharif\n");
    printf("2. Rabi\n");
    printf("3. Summer\n");

    printf("Enter season: ");
    scanf("%d", &season);

    printf("\n===== RECOMMENDED CROPS =====\n");

    if (soil == 1 && season == 1)
        printf("Cotton / Soybean\n");

    else if (soil == 1 && season == 2)
        printf("Wheat / Chickpea\n");

    else if (soil == 2 && season == 1)
        printf("Groundnut / Millets\n");

    else if (soil == 2 && season == 2)
        printf("Chickpea / Sorghum\n");

    else if (soil == 3 && season == 1)
        printf("Rice / Maize\n");

    else if (soil == 3 && season == 2)
        printf("Wheat / Mustard\n");

    else if (soil >= 1 && soil <= 3 &&
             season >= 1 && season <= 3)
        printf("Consult local agricultural expert for suitable crops.\n");

    else
        printf("Invalid selection!\n");

    printf("\nThank you for using AgriMitra AI!\n");

    // SOIL ANALYSIS MODULE

    double ph;
    float nitrogen, phosphorus, potassium;

    printf("\n===== SOIL ANALYSIS SYSTEM =====\n");

    printf("Enter Soil pH (0-14): ");
    if (scanf("%lf", &ph) != 1 || ph < 0 || ph > 14)
    {
        printf("Invalid pH value!\n");
        return 1;
    }

    printf("Enter Nitrogen value: ");
    if (scanf("%f", &nitrogen) != 1 || nitrogen < 0)
    {
        printf("Invalid Nitrogen value!\n");
        return 1;
    }

    printf("Enter Phosphorus value: ");
    if (scanf("%f", &phosphorus) != 1 || phosphorus < 0)
    {
        printf("Invalid Phosphorus value!\n");
        return 1;
    }

    printf("Enter Potassium value: ");
    if (scanf("%f", &potassium) != 1 || potassium < 0)
    {
        printf("Invalid Potassium value!\n");
        return 1;
    }

    printf("\n===== SOIL REPORT =====\n");

    printf("Soil pH       : %.2f\n", ph);
    printf("Nitrogen      : %.2f\n", nitrogen);
    printf("Phosphorus    : %.2f\n", phosphorus);
    printf("Potassium     : %.2f\n", potassium);

    if (ph < 5.5)
        printf("Soil condition: Acidic\n");
    else if (ph > 7.5)
        printf("Soil condition: Alkaline\n");
    else
        printf("Soil condition: Near neutral\n");

    printf("\nFor fertilizer decisions, consult a soil testing laboratory.\n");

    // WEATHER ADVISORY MODULE

    float temperature, rainfall, humidity;

    printf("\n===== WEATHER ADVISORY =====\n");

    printf("Enter temperature (C): ");
    if (scanf("%f", &temperature) != 1 ||
        temperature < -10 || temperature > 60)
    {
        printf("Invalid temperature!\n");
        return 1;
    }

    printf("Enter rainfall (mm in last 24 hours): ");
    if (scanf("%f", &rainfall) != 1 ||
        rainfall < 0 || rainfall > 1000)
    {
        printf("Invalid rainfall!\n");
        return 1;
    }

    printf("Enter humidity (0-100): ");
    if (scanf("%f", &humidity) != 1 ||
        humidity < 0 || humidity > 100)
    {
        printf("Invalid humidity!\n");
        return 1;
    }

    printf("\n===== WEATHER REPORT =====\n");

    printf("Temperature : %.1f C\n", temperature);
    printf("Rainfall    : %.1f mm\n", rainfall);
    printf("Humidity    : %.1f %%\n", humidity);

    if (temperature >= 35)
        printf("Advisory: High temperature. Monitor crop water needs.\n");

    if (rainfall >= 50)
        printf("Advisory: Heavy rainfall recorded. Check field drainage and local weather alerts.\n");
    else if (rainfall >= 10)
        printf("Advisory: Moderate rainfall recorded.\n");
    else
        printf("Advisory: Low rainfall recorded.\n");

    if (humidity >= 80)
        printf("Advisory: High humidity. Monitor crops for disease symptoms.\n");

    printf("\nWeather advisory completed!\n");

    // SMART IRRIGATION MODULE

    float soilMoisture;

    printf("\n===== SMART IRRIGATION SYSTEM =====\n");

    printf("Enter soil moisture (0-100%%): ");

    if (scanf("%f", &soilMoisture) != 1 ||
        soilMoisture < 0 || soilMoisture > 100)
    {
        printf("Invalid moisture value!\n");
        return 1;
    }

    printf("\n===== IRRIGATION REPORT =====\n");

    printf("Soil Moisture: %.1f%%\n", soilMoisture);

    if (soilMoisture < 30)
    {
        printf("Status: Low soil moisture\n");
        printf("Advisory: Irrigation may be required.\n");
    }
    else if (soilMoisture <= 60)
    {
        printf("Status: Moderate soil moisture\n");
        printf("Advisory: Monitor soil moisture regularly.\n");
    }
    else
    {
        printf("Status: High soil moisture\n");
        printf("Advisory: Irrigation may not be needed now.\n");
    }

    printf("\nSmart Irrigation Analysis Completed!\n");



    return 0;
}
