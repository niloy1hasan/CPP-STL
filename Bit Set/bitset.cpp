#include <iostream>
#include <bitset>
using namespace std;

int main(){
    /*
    bitset is a data structure template that can hold only 0 and 1,
    it is very useful when need to work bit level, bit manipulation, checking flag, binary representation
    
    syntax:
    bitset<amount_of_bit> bitsetName;
    default initialization:
    bitset<amount_of_bit> bitsetName(value); //direct data or binary string
    
    last index->00000000<-start index from here

    function:
    .test(position)   - test a position's bit is 1 or 0
    .set(position)    - set 1 at given position
    .reset(position)  - set 0 at given position
    .flip(position)   - if position value is 1, set 0 else set 1
    .none()           - check if have minimum a positive bit, if all bit is zero return true
    .all()            - check all bit is 1, if all bit = 1 then return true
    .count()          - count how much bit is 1
    .size()           - size of bitset
    .to_ulong()       - convert the bits into unsigned (positive) decimal long type
    .to_ullong()      - convert the bits into unsigned (positive) decimal long long type

    ** for bitwise operation bitween two bitset, both bitsize need to same **

    */

    bitset<7> data(14);
    cout << data << endl;

    bitset<7> binaryData("1001101");
    cout << binaryData << endl;



    cout << "third bit of binaryData: " << binaryData[2] << endl;
    cout << "fifth bit of binaryData: " << binaryData.test(4) << endl;


    binaryData.set(2);
    binaryData.reset(0);
    binaryData.flip(5);

    cout << binaryData << endl;


    cout << "& and operation: " << (data & binaryData) << endl;

    cout << "| or operation: " << (data | binaryData) << endl;

    cout << "^ xor operation: " << (data ^ binaryData) << endl;

    cout << "~ 1's complement operation: " << (~binaryData) << endl;

    cout << binaryData << " = " << binaryData.to_ulong() << endl;

    return 0;
}