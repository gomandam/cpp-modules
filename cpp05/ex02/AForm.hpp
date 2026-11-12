/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:31:43 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/11 20:49:52 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
#define	AFORM_HPP

class	AForm
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;

	public:
		AForm();
		~AForm();
		AForm(const std::string& name, const int sign_grade, const int execute_grade);
		AForm(const AForm& other);
		AForm& operator=(const Form& other);

		const	std::string&	getName() const;
		bool	returnSigned() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

		void	beSigned(const Bureaucrat& cat);

		virtual void	execute(Bureaucrat const& executor) const = 0;

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{	return "Form not signed.";	}
		};

	protected:
		void	checkExecution(Bureaucrat const& executor) const;
};

inline	std::ostream& operator<<(std::ostream& os, const AForm& aform)
{
	return os	<< "AForm " <<  aform.getName()
			<< " signed: " << (aform.returnSigned() ? "yes" : "no")
			<< ", sign grade: " << aform.getGradeSign()
			<< ", executed: " << aform.getGradeExecute() << ']';
}

#endif
