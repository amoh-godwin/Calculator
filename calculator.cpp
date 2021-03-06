#include "calculator.h"

Calculator::Calculator(QObject *parent) : QObject(parent)
{

}

void Calculator::evaluate(QString problem)
{
    // start thread here
    // call compute
    _compute(problem);
}

void Calculator::_compute(QString prob)
{
    // Calculate and return solve
    float result;
    result = _solve(prob);

    QString some;
    some = QString(1);

    // Emit final answer
    emit returnAnswer("result");
}

float Calculator::_solve(QString prob)
{
    // Does the real solving
    QString p;
    if (prob.contains('%')) {
        p = _solve_per(prob);
    } else {
        p = prob;
    }
    return 0.0;
}

QString Calculator::_solve_per(QString prob)
{
    // Calculate percentage on problem
    return prob;
}
