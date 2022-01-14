#include <iostream>
#include "ceaserencrypt.h"

CeaserEncrypt::CeaserEncrypt(char data[])
{
    for (int i = 0; data[i] != false; i++) {
         cData[i] = data[i];
    }

}

CeaserEncrypt::CeaserEncrypt(char data[], int key)
{
    cKey = key;
    for (int i = 0; data[i] != false; i++) {
         cData[i] = data[i];
    }
}

void CeaserEncrypt::Encrypt()
{
    if(cData[0] != false || cKey != false){
        for(int i = 0; cData[i] != false; i++){
            if(cData[i] != ' '){
                cEcryptedData[i] = cData[i] + cKey;
                if(cEcryptedData[i] > 'z') cEcryptedData[i] -= 26;
                else if(cEcryptedData[i] < 'a') cEcryptedData[i] += 26;
            }
        }
    }
    else if(cData[0] == false)
        std::cout << "ERROR: NO DATA";
    else if(cKey == false)
        std::cout << "ERROR: NO KEY";
    else
        std::cout << "ERROR: UNKNOWN ERROR";
}

void CeaserEncrypt::Decrypt()
{
    if(cEcryptedData[0] != false || cKey != false){
        for(int i = 0; cEcryptedData[i] != false; i++){
            if(cEcryptedData[i] != ' '){
                cEcryptedData[i] -= cKey;
                if(cEcryptedData[i] > 'z') cEcryptedData[i] -= 26;
                else if(cEcryptedData[i] < 'a') cEcryptedData[i] += 26;
            }
        }
    }
    else if(cEcryptedData[0] == false)
        std::cout << "ERROR: NO ENCRYPTED DATA";
    else if(cKey == false)
        std::cout << "ERROR: NO KEY";
    else
        std::cout << "ERROR: UNKNOWN ERROR";
}

void CeaserEncrypt::setData(char data[])
{
    for (int i = 0; cData[i] != false && data[i] != false; i++) {
        cData[i] = false;
        cData[i] = data[i];
    }
}

void CeaserEncrypt::setKey(int key)
{
    cKey = key;
}

void CeaserEncrypt::getResult()
{
    std::cout << cEcryptedData << std::endl;
}
