## Types of writing

-> Standart mode: file << data | file >> data
This way is slower due to the change of data from numbers to plain text. Important to note that when reading this mode will stop in the first space found.

-> Fast mode: file.write() | file.read()
This is faster way to add binary directly to the file

## Extra info:

-> We use ´reinterpret_cast´ because the library was made to proccess char* type.
-> is_open() ensures that the file is open and prevents segmentation faults.