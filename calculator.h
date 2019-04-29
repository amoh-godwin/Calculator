#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class Calculator : public QObject
{
    Q_OBJECT
public:
    explicit Calculator(QObject *parent=nullptr);
    void _compute(QString prob);
    float _solve(QString prob);
    QString _solve_per(QString prob);

signals:
    void returnAnswer(QString ans);

public slots:
    void evaluate(QString problem);

private:
    QString returnedSolution;
};

#endif // CALCULATOR_H
