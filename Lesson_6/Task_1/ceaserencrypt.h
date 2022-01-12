#ifndef CEASERENCRYPT_H
#define CEASERENCRYPT_H


class CeaserEncrypt
{
public:
    CeaserEncrypt();
    CeaserEncrypt(char data[]);
    CeaserEncrypt(char data[], int key);
    void Encrypt();
    void Decrypt();
    char* getData(){return cData;}
    void setData(char data[]);
    int getKey(){return cKey;}
    void setKey(int key);
    void getResult();
private:
    char cData[256] = {' '};
    int cKey = 0;
    char cEcryptedData[256];
};

#endif // CEASERENCRYPT_H
