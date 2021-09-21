#include <stdio.h>

void length();
void weight();
void volume();
void time();

void length() {
    int measure1;
    double number;
    double input;
    double answer;
    int convert;
    printf("Length Converter\n");
    printf("Enter a number: 1. Inches, 2. Feet, 3. Yards, 4. Miles, 5. Millimeters, 6. Centimeters, 7. Meters, 8. Kilometers\n");
    scanf("%d", &measure1);
    switch (measure1) {
        case 1:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert inches into? 1. Feet, 2. Yards, 3. Miles, 4. Millimeters, 5. Centimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.08333333;
                printf("1 inch equals 0.08333333 feet\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.02777778;
                printf("1 inch equals 0.02777778 yards\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 0.0000157828;
                printf("1 inch equals 0.0000157828 miles\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 25.4;
                printf("1 inch equals 25.4 millimeters\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 2.54;
                printf("1 inch equals 2.54 centimeters\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 0.0254;
                printf("1 inch equals 0.0254 meters\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.0000254;
                printf("1 inch equals 0.0000254 kilometers\n");
                printf("%lf", number);
                printf(" inch(es) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 2:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert feet into? 1. Inches, 2. Yards, 3. Miles, 4. Millimeters, 5. Centimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 12;
                printf("1 foot equals 12 inches\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.33333333;
                printf("1 foot equals 0.33333333 yards\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 0.000189394;
                printf("1 foot equals 0.000189394 miles\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 304.800097536;
                printf("1 foot equals 304.800097536 millimeters\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 30.4800097536;
                printf("1 foot equals 30.4800097536 centimeters\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 0.3048;
                printf("1 foot equals 0.3048 meters\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.0003048;
                printf("1 foot equals 0.0003048 kilometers\n");
                printf("%lf", number);
                printf(" foot/feet equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 3:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert yards into? 1. Inches, 2. Feet, 3. Miles, 4. Millimeters, 5. Centimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 36;
                printf("1 yard equals 36 inches\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 3;
                printf("1 yard equals 3 feet\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 0.000568182;
                printf("1 yard equals 0.000568182 miles\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 914.400292608;
                printf("1 yard equals 914.400292608 millimeters\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 91.4400292608;
                printf("1 yard equals 91.4400292608 centimeters\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 0.9144;
                printf("1 yard equals 0.9144 meters\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.0009144;
                printf("1 yard equals 0.0009144 kilometers\n");
                printf("%lf", number);
                printf(" yard(s) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 4:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert miles into? 1. Inches, 2. Feet, 3. Yards, 4. Millimeters, 5. Centimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 63360;
                printf("1 mile equals 63360 inches\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 5280;
                printf("1 mile equals 5280 feet\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 1760;
                printf("1 mile equals 1760 yards\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 1609344;
                printf("1 mile equals 1609344 millimeters\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 160934.4;
                printf("1 mile equals 160934.4 centimeters\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 1609.344;
                printf("1 mile equals 1609.344 meters\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 1.609344;
                printf("1 mile equals 1.609344 kilometers\n");
                printf("%lf", number);
                printf(" mile(s) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 5:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert millimeters into? 1. Inches, 2. Feet, 3. Yards, 4. Miles, 5. Centimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.0393701;
                printf("1 millimeter equals 0.0393701 inches\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.00328084;
                printf("1 millimeter equals 0.00328084 feet\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 0.00109361;
                printf("1 millimeter equals 0.00109361 yards\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 0.00000062;
                printf("1 millimeter equals 0.00000062 miles\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 0.1;
                printf("1 millimeter equals 0.1 centimeters\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 0.001;
                printf("1 millimeter equals 0.001 meters\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.000001;
                printf("1 millimeter equals 0.000001 kilometers\n");
                printf("%lf", number);
                printf(" millimeter(s) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 6:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert centimeters into? 1. Inches, 2. Feet, 3. Yards, 4. Miles, 5. Millimeters, 6. Meters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.393701;
                printf("1 centimeter equals 0.393701 inches\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.0328084;
                printf("1 centimeter equals 0.0328084 feet\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 0.0109361;
                printf("1 centimeter equals 0.0109361 yards\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 0.0000062;
                printf("1 centimeter equals 0.0000062 miles\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 10;
                printf("1 centimeter equals 10 millimeters\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 0.01;
                printf("1 centimeter equals 0.01 meters\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.00001;
                printf("1 centimeter equals 0.00001 kilometers\n");
                printf("%lf", number);
                printf(" centimeter(s) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 7:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert meters into? 1. Inches, 2. Feet, 3. Yards, 4. Miles, 5. Millimeters, 6. Centimeters, 7. Kilometers\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 39.3701;
                printf("1 meter equals 39.3701 inches\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 3.28084;
                printf("1 meter equals 3.28084 feet\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 1.09361;
                printf("1 meter equals 1.09361 yards\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 0.000621371;
                printf("1 meter equals 0.000621371 miles\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 1000;
                printf("1 meter equals 1000 millimeters\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 100;
                printf("1 meter equals 100 centimeters\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 0.001;
                printf("1 meter equals 0.001 kilometers\n");
                printf("%lf", number);
                printf(" meter(s) equals ");
                printf("%lf", result);
                printf(" kilometer(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 8:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert kilometers into? 1. Inches, 2. Feet, 3. Yards, 4. Miles, 5. Millimeters, 6. Centimeters, 7. Meters\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 39370.1;
                printf("1 kilometer equals 39370.1 inches\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" inch(es)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 3280.84;
                printf("1 kilometer equals 3280.84 feet\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" foot/feet\n");
                break;
            }

            else if (convert == 3) {
                double result = number * 1093.61;
                printf("1 kilometer equals 1093.61 yards\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" yard(s)\n");
                break;
            }

            else if (convert == 4) {
                double result = number * 0.621371;
                printf("1 kilometer equals 0.621371 miles\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" mile(s)\n");
                break;
            }

            else if (convert == 5) {
                double result = number * 1000000;
                printf("1 kilometer equals 1000000 millimeters\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" millimeter(s)\n");
                break;
            }

            else if (convert == 6) {
                double result = number * 100000;
                printf("1 kilometer equals 100000 centimeters\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" centimeter(s)\n");
                break;
            }

            else if (convert == 7) {
                double result = number * 1000;
                printf("1 kilometer equals 1000 meters\n");
                printf("%lf", number);
                printf(" kilometer(s) equals ");
                printf("%lf", result);
                printf(" meter(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        default:
            printf("Please try again\n");
            break;
    }
}

void weight() {
    int measure1;
    double number;
    double input;
    double answer;
    int convert;
    printf("Weight Converter\n");
    printf("Enter a number: 1. Grams, 2. Milligrams, 3. Kilograms, 4. Metric Ton, 5. Ounces, 6. Pounds, 7. US Ton");
    scanf("%d", &measure1);
    switch (measure1) {
        case 1:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert grams into? 1. Milligrams, 2. Kilograms, 3. Metric Ton, 4. Ounces, 5. Pounds, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 1000;
                printf("1 gram equals 1000 milligrams\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.001;
                printf("1 gram equals 0.001 kilograms\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.000001;
                printf("1 gram equals 0.000001 metric tons\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.035274;
                printf("1 gram equals 0.035274 ounces\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" ounce(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.00220462;
                printf("1 gram equals 0.00220462 pounds\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.0000011;
                printf("1 gram equals 0.0000011 US tons\n");
                printf("%lf", number);
                printf(" gram(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 2:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert milligrams into? 1. Grams, 2. Kilograms, 3. Metric Ton, 4. Ounces, 5. Pounds, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.001;
                printf("1 milligram equals 0.001 grams\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.000001;
                printf("1 milligram equals 0.000001 kilograms\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.000000001;
                printf("1 milligram equals 0.0000000001 metric tons\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.0000352;
                printf("1 milligram equals 0.00003527 ounces\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" ounce(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.00000220;
                printf("1 milligram equals 0.00000220 pounds\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.00000000011;
                printf("1 milligram equals 0.00000000011 US tons\n");
                printf("%lf", number);
                printf(" milligram(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 3:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert kilograms into? 1. Grams, 2. Milligrams, 3. Metric Ton, 4. Ounces, 5. Pounds, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 1000;
                printf("1 kilogram equals 1000 grams\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 1000000;
                printf("1 kilogram equals 1000000 milligrams\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.001;
                printf("1 kilogram equals 0.0001 metric tons\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 35.274;
                printf("1 kilogram equals 35.274 ounces\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" ounce(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 2.20462;
                printf("1 kilogram equals 2.20462 pounds\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.00110231;
                printf("1 kilogram equals 0.00110231 US tons\n");
                printf("%lf", number);
                printf(" kilogram(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 4:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert metric tons into? 1. Grams, 2. Milligrams, 3. Kilograms, 4. Ounces, 5. Pounds, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 1000000;
                printf("1 metric ton equals 1000000 grams\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 1000000000;
                printf("1 metric ton equals 1000000000 milligrams\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 1000;
                printf("1 metric ton equals 1000 kilograms\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 35274;
                printf("1 metric ton equals 35274 ounces\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" ounce(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 2204.62;
                printf("1 metric ton equals 2204.62 pounds\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 1.10231;
                printf("1 metric ton equals 1.10231 US tons\n");
                printf("%lf", number);
                printf(" metric ton(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 5:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert ounces into? 1. Grams, 2. Milligrams, 3. Kilograms, 4. Metric Tons, 5. Pounds, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 28.3495;
                printf("1 ounce equals 28.3495 grams\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 28349.5;
                printf("1 ounce equals 28349.5 milligrams\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.0283495;
                printf("1 ounce equals 0.0283495 kilograms\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.000028349;
                printf("1 ounce equals 0.000028349 metric tons\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.0625;
                printf("1 ounce equals 0.0625 pounds\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.00003125;
                printf("1 ounce equals 0.00003125 US tons\n");
                printf("%lf", number);
                printf(" ounce(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 6:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert pounds into? 1. Grams, 2. Milligrams, 3. Kilograms, 4. Metric Tons, 5. Ounces, 6. US Ton\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 453.592;
                printf("1 pound equals 453.592 grams\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 453592;
                printf("1 pound equals 453592 milligrams\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.453592;
                printf("1 pound equals 0.453592 kilograms\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.000028349;
                printf("1 pound equals 0.000028349 metric tons\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.0625;
                printf("1 pound equals 0.0625 pounds\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.00003125;
                printf("1 pound equals 0.00003125 US tons\n");
                printf("%lf", number);
                printf(" pound(s) equals ");
                printf("%lf", result);
                printf(" US ton(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 7:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert US Tons into? 1. Grams, 2. Milligrams, 3. Kilograms, 4. Metric Tons, 5. Ounces, 6. Pounds\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 907185;
                printf("1 US Ton equals 907185 grams\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" gram(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 907185000;
                printf("1 US Ton equals 907185000 milligrams\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" milligram(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 907.185;
                printf("1 US Ton equals 907.185 kilograms\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" kilogram(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.907185;
                printf("1 US Ton equals 0.907185 metric tons\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" metric ton(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 32000;
                printf("1 US Ton equals 32000 ounces\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" ounce(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 2000;
                printf("1 US Ton equals 2000 pounds\n");
                printf("%lf", number);
                printf(" US Ton(s) equals ");
                printf("%lf", result);
                printf(" pound(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        default:
            printf("Please try again\n");
            break;
    }
}

void volume() {
    int measure1;
    double number;
    double input;
    double answer;
    int convert;
    printf("Volume Converter\n");
    printf("Enter a number: 1. Milliliters, 2. Liters, 3. Fluid Ounces, 4. Cups, 5. Pints, 6. Quarts, 7. Gallons");
    scanf("%d", &measure1);
    switch (measure1) {
        case 1:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert milliliters into? 1. Liters, 2. Fluid Ounces, 3. Cups, 4. Pints, 5. Quarts, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.001;
                printf("1 milliliter equals 0.001 liters\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.033814;
                printf("1 milliliter equals 0.033814 fluid ounces\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.00416667;
                printf("1 milliliter equals 0.00416667 cups\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.00211338;
                printf("1 milliliter equals 0.00211338 pints\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.00105669;
                printf("1 milliliter equals 0.00105669 quarts\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.000264172;
                printf("1 milliliter equals 0.000264172 gallons\n");
                printf("%lf", number);
                printf(" milliliter(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 2:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert liters into? 1. Milliiters, 2. Fluid Ounces, 3. Cups, 4. Pints, 5. Quarts, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 1000;
                printf("1 liter equals 1000 milliliters\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 33.814;
                printf("1 liter equals 33.814 fluid ounces\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 4.16667;
                printf("1 liter equals 4.16667 cups\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 2.11338;
                printf("1 liter equals 2.11338 pints\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 1.05669;
                printf("1 liter equals 1.05669 quarts\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.264172;
                printf("1 liter equals 0.264172 gallons\n");
                printf("%lf", number);
                printf(" liter(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 3:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert fluid ounces into? 1. Milliiters, 2. Liters, 3. Cups, 4. Pints, 5. Quarts, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 29.5735;
                printf("1 fluid ounce equals 29.5735 milliliters\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.0295735;
                printf("1 fluid ounce equals 0.0295735 liters\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.125;
                printf("1 fluid ounce equals 0.125 cups\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.0625;
                printf("1 fluid ounce equals 0.0625 pints\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.03125;
                printf("1 fluid ounce equals 0.03125 quarts\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.0078125;
                printf("1 fluid ounce equals 0.0078125 gallons\n");
                printf("%lf", number);
                printf(" fluid ounce(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 4:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert cups into? 1. Milliiters, 2. Liters, 3. Fluid Ounces, 4. Pints, 5. Quarts, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 236.588;
                printf("1 cup equals 236.588 milliliters\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.236588;
                printf("1 cup equals 0.236588 liters\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 8;
                printf("1 cup equals 8 fluid ounces\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.5;
                printf("1 cup equals 0.5 pints\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.25;
                printf("1 cup equals 0.25 quarts\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.0625;
                printf("1 cup equals 0.0625 gallons\n");
                printf("%lf", number);
                printf(" cup(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 5:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert pints into? 1. Milliiters, 2. Liters, 3. Fluid Ounces, 4. Cups, 5. Quarts, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 473.176;
                printf("1 pint equals 473.176 milliliters\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.473176;
                printf("1 pint equals 0.473176 liters\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 16;
                printf("1 pint equals 16 fluid ounces\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 2;
                printf("1 pint equals 2 cups\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.5;
                printf("1 pint equals 0.5 quarts\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.125;
                printf("1 pint equals 0.125 gallons\n");
                printf("%lf", number);
                printf(" pint(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 6:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert quarts into? 1. Milliiters, 2. Liters, 3. Fluid Ounces, 4. Cups, 5. Pints, 6. Gallons\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 946.353;
                printf("1 quart equals 946.353 milliliters\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.946353;
                printf("1 quart equals 0.946353 liters\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 32;
                printf("1 quart equals 32 fluid ounces\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 4;
                printf("1 quart equals 4 cups\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 2;
                printf("1 quart equals 2 pints\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.25;
                printf("1 quart equals 0.25 gallons\n");
                printf("%lf", number);
                printf(" quart(s) equals ");
                printf("%lf", result);
                printf(" gallons(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 7:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert gallons into? 1. Milliiters, 2. Liters, 3. Fluid Ounces, 4. Cups, 5. Pints, 6. Quarts\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 3785.41;
                printf("1 gallon equals 3785.41 milliliters\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" milliliter(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 3.78541;
                printf("1 gallon equals 3.78541 liters\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" liter(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 128;
                printf("1 gallon equals 128 fluid ounces\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" fluid ounce(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 16;
                printf("1 gallon equals 16 cups\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" cup(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 8;
                printf("1 gallon equals 8 pints\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" pint(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 4;
                printf("1 gallon equals 4 quarts\n");
                printf("%lf", number);
                printf(" gallon(s) equals ");
                printf("%lf", result);
                printf(" quart(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        default:
            printf("Please try again\n");
            break;
    }
}

void time() {
    int measure1;
    double number;
    double input;
    double answer;
    int convert;
    printf("Time Converter\n");
    printf("Enter a number: 1. Seconds, 2. Minutes, 3. Hours, 4. Days, 5. Weeks, 6. Months, 7. Years");
    scanf("%d", &measure1);
    switch (measure1) {
        case 1:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert seconds into? 1. Minutes, 2. Hours, 3. Days, 4. Weeks, 5. Months, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 0.0166667;
                printf("1 second equals 0.0166667 minutes\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.0002778;
                printf("1 second equals 0.0002778 hours\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.0000115407;
                printf("1 second equals 0.0000115407 days\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.0000016534;
                printf("1 second equals 0.0000016534 weeks\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.0000004133;
                printf("1 second equals 0.0000004133 months\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" month(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.000000034;
                printf("1 second equals 0.000000034 years\n");
                printf("%lf", number);
                printf(" second(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 2:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert minutes into? 1. Seconds, 2. Hours, 3. Days, 4. Weeks, 5. Months, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 60;
                printf("1 minutes equals 60 seconds\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 0.0166666;
                printf("1 minute equals 0.0166666 hours\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.00069444;
                printf("1 minute equals 0.00069444 days\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.0000992;
                printf("1 minute equals 0.0000992 weeks\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.0000248;
                printf("1 minute equals 0.0000248 months\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" month(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.00000206;
                printf("1 minute equals 0.00000206 years\n");
                printf("%lf", number);
                printf(" minute(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 3:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert hours into? 1. Seconds, 2. Minutes, 3. Days, 4. Weeks, 5. Months, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 3600;
                printf("1 hours equals 3600 seconds\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 60;
                printf("1 hour equals 60 minutes\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 0.04166667;
                printf("1 hour equals 0.04166667 days\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.00595238;
                printf("1 hour equals 0.00595238 weeks\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.00148809;
                printf("1 hour equals 0.00148809 months\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" month(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.000124;
                printf("1 hour equals 0.000124 years\n");
                printf("%lf", number);
                printf(" hour(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 4:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert days into? 1. Seconds, 2. Minutes, 3. Hours, 4. Weeks, 5. Months, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 86400;
                printf("1 days equals 86400 seconds\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 1440;
                printf("1 day equals 1440 minutes\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 24;
                printf("1 day equals 24 hours\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 0.14285714;
                printf("1 day equals 0.14285714 weeks\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.035714285;
                printf("1 day equals 0.035714285 months\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" month(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.002976;
                printf("1 day equals 0.002976 years\n");
                printf("%lf", number);
                printf(" day(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 5:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert weeks into? 1. Seconds, 2. Minutes, 3. Hours, 4. Days, 5. Months, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 604800;
                printf("1 weeks equals 604800 seconds\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 10080;
                printf("1 week equals 10080 minutes\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 168;
                printf("1 week equals 168 hours\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 7;
                printf("1 week equals 7 days\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 0.25;
                printf("1 week equals 0.25 months\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" month(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.02833;
                printf("1 week equals 0.02833 years\n");
                printf("%lf", number);
                printf(" week(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 6:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert months into? 1. Seconds, 2. Minutes, 3. Hours, 4. Days, 5. Weeks, 6. Years\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 2419200;
                printf("1 months equals 2419200 seconds\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 40320;
                printf("1 month equals 40320 minutes\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 672;
                printf("1 month equals 168 hours\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 28;
                printf("1 month equals 7 days\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                printf("(A day can also be 29, 30, or 31 days depending on the month and if it is a leap year)");
                break;
            }

            else if(convert == 5) {
                double result = number * 4;
                printf("1 month equals 4 weeks\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 0.08333;
                printf("1 month equals 0.08333 years\n");
                printf("%lf", number);
                printf(" month(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        case 7:
            printf("Enter a value:\n");
            scanf("%lf", &number);
            printf("What would you like to convert years into? 1. Seconds, 2. Minutes, 3. Hours, 4. Days, 5. Weeks, 6. Months\n");
            scanf("%d", &convert);

            if(convert == 1) {
                double result = number * 31536000;
                printf("1 years equals 31536000 seconds\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" second(s)\n");
                break;
            }

            else if(convert == 2) {
                double result = number * 525600;
                printf("1 year equals 525600 minutes\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" minute(s)\n");
                break;
            }

            else if(convert == 3) {
                double result = number * 8760;
                printf("1 year equals 8760 hours\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" hour(s)\n");
                break;
            }

            else if(convert == 4) {
                double result = number * 365;
                printf("1 year equals 365 days\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" day(s)\n");
                break;
            }

            else if(convert == 5) {
                double result = number * 52;
                printf("1 year equals 52 weeks\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" week(s)\n");
                break;
            }

            else if(convert == 6) {
                double result = number * 12;
                printf("1 year equals 12 months\n");
                printf("%lf", number);
                printf(" year(s) equals ");
                printf("%lf", result);
                printf(" year(s)\n");
                break;
            }

            else {
                printf("Please try again\n");
                break;
            }

        default:
            printf("Please try again\n");
            break;
    }
}

int main() {
    int choice;
    double input1;
    printf("Converter\n");
    printf("What would you like to convert? (1. Length, 2. Weight, 3. Volume, 4. Time)\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            length();
            break;
        case 2:
            weight();
            break;
        case 3:
            volume();
            break;
        case 4:
            time();
            break;
        default:
            printf("Please try again\n");
            break;
    }
    return 0;
}