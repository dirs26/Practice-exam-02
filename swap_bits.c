unsigned char swap_bits(unsigned char octet) 
{
    return (octet >> 4) | (octet << 4);
}
// The function swap_bits takes an unsigned char as a parameter and returns an unsigned char. The function shifts the bits of the octet 4 places to the right and then 4 places to the left. The function then returns the result of the bitwise OR operation between the two shifted octets. This effectively swaps the 4 most significant bits with the 4 least significant bits of the octet.