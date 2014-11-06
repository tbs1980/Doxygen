#ifndef MYCLASS_HPP
#define MYCLASS_HPP

/*!
* \namespace my_doxygen_namespace
* \brief This namespace defines all the classes related
* to doxygen documentation
*/
namespace my_doxygen_namespace
{

    /*!
    * An example enum
    */
    enum my_class_enum
    {

        FIRST, /*!< first enum */

        SECOND, /*!< second enum */

        THIRID /*!< third enum */
    };


    /*! \class my_doxygen_class
    * \brief a doxygen test class
    *
    * \tparam T1 first template argument
    * \tparam T2 second template argument
    */
    template<typename T1, typename T2>
    class my_doxygen_class
    {
    public:

        /*!
        * \typedef T1 Type1
        * \brief defines the type of the first type
        */
        typedef T1 Type1;

        /*!
        * \typedef T2 Type2
        * \brief defines the type of the second type
        */
        typedef T2 Type2;

        /*!
        * \brief the default constructor that takes no argument
        */
        my_doxygen_class()
        {

        }

        /*!
        * \brief the default destructor
        */
        ~my_doxygen_class()
        {

        }

        /*!
        * \brief a function that takes two arguments
        *
        * \param arg_t1 first argument
        * \param arg_t2 second argument
        */
        void my_public_function(T1 arg_t1,T2 arg_t2) const
        {

        }

    private:


        T1 m_t1; /*!< first private member*/

        T2 m_t2; /*!< second private member*/
    };

}

#endif //MYCLASS_HPP
