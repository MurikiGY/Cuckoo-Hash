# Cuckoo-Hash
This is a more simple implementation of the Cuckoo-Hash algorithm.

Data structure:
- Hash_t is a struct that has 2 integer variables, one represents the value stored and the other represents the status (empty, stored or excluded).
- 2 vectors of Hash_t representing tables.

Algorithm:
The position of the data inside the tables are calculed by two functions, named as hash1 and hash2.

Insertions are always in the table1.
If already exists an value in its position, then the insertion is in table2.
Collisions in table2 are not considered.
