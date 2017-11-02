float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float cm_to_miles (void)
{
    //HUNTER HOWLAND
    float cm= get_float ("Number of centimeters:");
    float m= cm*0.00000621371;
    printf("\nThe number of miles is %.2f\n",m);
    return m;
}
