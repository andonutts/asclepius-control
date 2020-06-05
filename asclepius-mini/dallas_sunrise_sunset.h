/* dallas_sunrise_sunset.h
 * Header file containing sunrise and sunset times for Dallas in 2020
 */

const uint16_t sunrise_time_table[12][31] PROGMEM = {
    // January
    {},
    // February
    {},
    // March
    {},
    // April
    {},
    // May
    {},
    // June
    {
        619, 619, 619, 619, 619, 618, 618,
        618, 618, 618, 618, 618, 618, 618,
        618, 618, 619, 619, 619, 619, 619,
        620, 620, 620, 620, 621, 621, 621,
        622, 622
    },
    // July
    {
        623, 623, 623, 624, 624, 625, 625,
        626, 626, 627, 628, 628, 629, 629,
        630, 630, 631, 632, 632, 633, 634,
        634, 635, 636, 636, 637, 638, 638,
        639, 640, 640
    },
    // August
    {
        641, 642, 642, 643, 644, 644, 645,
        645, 646, 647, 648, 648, 649, 650,
        651, 651, 652, 653, 653, 654, 655,
        655, 656, 657, 657, 658, 659, 659,
        700, 700, 701
    },
    // September
    {
        702, 702, 703, 704, 704, 705, 706,
        706, 707, 708, 708, 709, 709, 710,
        711, 711, 712, 713, 713, 714, 715,
        715, 716, 717, 717, 718, 719, 719,
        720, 721
    },
    // October
    {},
    // November
    {},
    // December
    {}
};

const uint16_t sunset_time_table[12][31] PROGMEM = {
    // January
    {},
    // February
    {},
    // March
    {},
    // April
    {},
    // May
    {},
    // June
    {
        2030, 2031, 2031, 2032, 2032, 2033, 2033,
        2034, 2034, 2035, 2035, 2035, 2036, 2036,
        2036, 2037, 2037, 2037, 2038, 2038, 2038,
        2038, 2038, 2039, 2039, 2039, 2039, 2039,
        2039, 2039
    },
    // July
    {
        2039, 2039, 2039, 2038, 2038, 2038, 2038,
        2038, 2037, 2037, 2037, 2037, 2036, 2036,
        2035, 2035, 2034, 2034, 2033, 2033, 2032,
        2032, 2031, 2031, 2030, 2029, 2028, 2028,
        2027, 2026, 2025
    },
    // August
    {
        2025, 2024, 2023, 2022, 2021, 2020, 2019,
        2018, 2017, 2016, 2015, 2014, 2013, 2012,
        2011, 2010, 2009, 2008, 2007, 2005, 2004,
        2003, 2002, 2001, 1959, 1958, 1957, 1956,
        1954, 1953, 1952
    },
    // September
    {
        1951, 1949, 1948, 1947, 1945, 1944, 1943,
        1941, 1940, 1939, 1937, 1936, 1935, 1933,
        1932, 1931, 1929, 1928, 1927, 1925, 1924,
        1923, 1921, 1920, 1919, 1917, 1916, 1914,
        1913, 1912
    },
    // October
    {},
    // November
    {},
    // December
    {}
};