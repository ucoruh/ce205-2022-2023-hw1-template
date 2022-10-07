using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;

namespace mylibcs
{
    internal class MyCalculator
    {
        /// <summary>
        /// Calculate the results for statement such as “(1+5)*(5%(10*10))
        /// </summary>
        /// <param name="expression"></param>
        /// <returns></returns>
        int evaluateInfix(string expression)
        {
            return 0;
        }

        /// <summary>
        /// This function will determine missing parenthesis in the statement (Evaluate Infix will use this function inside
        /// </summary>
        /// <param name="expression"></param>
        /// <returns></returns>
        bool validateInfix(string expression)
        {
            return false;
        }

        /// <summary>
        /// This function will convert infix to postfix, and EvaluateInfix will process postfix evaluation. This function will be used in EvaluateInfix
        /// </summary>
        /// <param name="expression"></param>
        /// <returns></returns>
        string InfixToPostfixConversion(string expression)
        {
            return string.Empty;
        }
    }
}
