#ifndef FIGHTER_H
#define FIGHTER_H


class fighter
{
public:
    fighter();
    int getDmg(){return dmg;};
    void setDmg(int newDmg);
    int getHp(){return hp;};
    void setHp(int newHp);
    int getMs(){return ms;};
    void setMs(int newMs);
    void showInfo();
private:
    int dmg = 0, hp = 0, ms = 0;
};

#endif // FIGHTER_H
