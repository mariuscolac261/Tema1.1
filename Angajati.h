
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

class Angajati {
public:
    virtual ~Angajati() = default;
    virtual std::shared_ptr<Angajati> clone() const = 0;
    double salariu() const {return salariu1(); }

    friend std::ostream &operator<<(std::ostream &os, const Angajati &ang);

    explicit Angajati(std::string nume );

    Angajati(Angajati &&other) = default;
    Angajati &operator=(Angajati &&other) = default;
protected:
    Angajati(const Angajati &other) = default;
    Angajati &operator=(const Angajati &other) = default;

private:
     virtual double salariu1() const = 0;
     virtual void afisare(std::ostream &) const;

    std::string name;
};


