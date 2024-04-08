#ifndef LIST_H
# define LIST_H

# include "../LIBFT_UTILS/libft.h"
# include "../PRINTF/ft_printf.h"

void	ft_lstprintf(t_list *lst);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstcreate(int nb, ...);
t_list	*ft_lstfirst(t_list *lst);
t_list	*ft_lstfirst(t_list *lst);
t_list	*ft_dellast(t_list *lst);

#endif
