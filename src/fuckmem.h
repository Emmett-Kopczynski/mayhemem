#ifndef FUCKMEM_H_
#define FUCKMEM_H_
/* fuckmem.h :: TODO document
 *
 *  To Do :
 *
 *      To Document :
 *          - fuckmem
 *          - moremem
 *          - freeish
 *
 */




/* NOTE :: This typedef long is used soley to allign the header union, as it will force it to 
 * Allign upon specific boundries
 */
typedef long Align; 

/* Header : a typedef union that is built to be at the front of a chunk of 
 * free memory with a size of s.size
 *
 * uses the Align x to allign the memory chunks
 */
typedef union header {
    struct {
        union header *ptr;
        unsigned size; 
    } s; /* defines itself as an unamed structure type, with an identifier of s */
    Align x;
} Header;




/* TODO document fuckmem
 *
 */
void *fuckmem(unsigned num_bytes);



/* TODO document moremem
 *
 */
static Header *moremem(unsigned num_bytes);



/* TODO document freeish
 *
 *
 */
void freeish(void *to_free);



#endif
