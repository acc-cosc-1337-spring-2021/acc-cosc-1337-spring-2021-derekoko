#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double total = 0.0;
    double num_of_chars = 0.0;
    
    for (unsigned int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G')
        {
            num_of_chars++;
        } 
        if (dna[i] == 'C')
        {
            num_of_chars++;
        }
    }

    total = num_of_chars/ dna.length();

    return total;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string reverse_string(string dna)
{
    string dna_new = "";
    for (int i = dna.size() - 1; i >= 0; --i)
    {
        dna_new += dna[i];
    }

    return dna_new;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    string reversed_string = reverse_string(dna);
    string new_reversed = "";
    
    for (unsigned int i = 0; i < reversed_string.length(); i++)
    {
        if (reversed_string[i] == 'A')
        {
            new_reversed += 'T';
        }
        if (reversed_string[i] == 'T')
        {
            new_reversed += 'A';
        }
        if (reversed_string[i] == 'G')
        {
            new_reversed += 'C';
        }
        if (reversed_string[i] == 'C')
        {
            new_reversed += 'G';
        }
    }

    return new_reversed; 
}

