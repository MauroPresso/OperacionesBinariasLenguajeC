#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "binary_operations_64bits_lib.h"



int main()
{
    uint64_t val;
    
    // Probando set_bit64().
    // TRUE.
    val = 255;
    printf("\nValor == 255:\n");
    show_bin64(val); 
    val = set_bit64(val, 3, true);
    printf("\nValor modificado con set_bit64 con el dato booleano == true:\n");
    show_bin64(val);

    val = 0;
    printf("\nValor == 0:\n");
    show_bin64(val);
    val = set_bit64(val, 3, true);
    printf("\nValor modificado con set_bit64 con el dato booleano == true:\n");
    show_bin64(val);
    // set_bit64() funciona bien para TRUE.

    // FALSE.
    val = 255;
    printf("\nValor == 255:\n");
    show_bin64(val); 
    val = set_bit64(val, 3, false);
    printf("\nValor modificado con set_bit64 con el dato booleano == false:\n");
    show_bin64(val);

    val = 0;
    printf("\nValor == 0:\n");
    show_bin64(val);
    val = set_bit64(val, 3, false);
    printf("\nValor modificado con set_bit64 con el dato booleano == false:\n");
    show_bin64(val);
    // set_bit64() funciona bien para FALSE.

    // Probando toggle_bit64().
    val = 255;
    printf("\nValor == 255:\n");
    show_bin64(val); 
    val = toggle_bit64(val, 3);
    printf("\nValor modificado con toggle_bit64:\n");
    show_bin64(val);

    val = 0;
    printf("\nValor == 0:\n");
    show_bin64(val);
    val = toggle_bit64(val, 3);
    printf("\nValor modificado con toggle_bit64:\n");
    show_bin64(val);
    // toggle_bit64() FUNCIONA BIEN.

    // Probando carry_rotate64().
    
    // Rotando a la IZQUIERDA.
    val = 9223372036854775807;
    printf("\nValor == 9223372036854775807:\n");
    show_bin64(val); 
    printf("\nValor == 9223372036854775807 rotado 4 veces a la IZQUIERDA:\n");
    val = carry_rotate64(val, 4);
    show_bin64(val);
    
    // Rotando a la DERECHA.
    val = 255;
    printf("\nValor == 255:\n");
    show_bin64(val); 
    printf("\nValor == 255 rotado 4 veces a la DERECHA:\n");
    val = carry_rotate64(val, -4);
    show_bin64(val);
    
    // carry_rotate64() funciona bien tanto para la derecha como para la izquierda.

    // Probando extract_bits_segment64().
    val = 247;
    printf("\nValor == 247:\n");
    show_bin64(val);
    printf("\nSegmento de Valor == 247:\n");
    val = extract_bits_segment64(val, 0, 5);
    show_bin64(val);
    // extract_bits_segment64() FUNCIONA BIEN.

    return 0;
}

// The void show_bin64() works OK.