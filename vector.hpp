/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:50:05 by ichougra          #+#    #+#             */
/*   Updated: 2021/11/24 12:07:19 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <memory>

namespace ft
{
    template < typename T, typename Allocator = std::allocator<T> >
    class vector
    {
        public:
            typedef typename Allocator::reference reference;
			typedef typename Allocator::const_reference const_reference;

			typedef typename Allocator::pointer pointer;
			typedef typename Allocator::const_pointer const_pointer;

            typedef T* iterator;
            typedef const T* const_iterator;

        private:
            pointer tab;
            size_t taille;
            size_t _capacity;
            allocator_type _alloc;

        public:
            //=========================CONSTRUCT/COPY/DESTROY=====================//
            vector() { };

            vector(size_t n, const T& val = T())
            {
                this->taille = n;
                
                for (this->_capacity = 1 ; this->_capacity <= n ; this->_capacity <<= 1);
                this->tab = new T[this->_capacity];

                for (size_t i = 0 ; i < this->taille ; i++)
                    tab[i] = val;
            }

            vector(const vector& v)
            {
                this->taille = v.taille;
                this->_capacity = v._capacity;
                this->tab = new T[_capacity];

                for(size_t i = 0 ; i < taille ; i++)
                    tab[i] = v.tab[i];
            }
            
            ~vector() { delete[] tab; }

            vector & operator=(const vector& copy)
            {
                this->tab = copy.tab;
                this->taille = copy.taille;
                this->_capacity = _capacity;
                return *this;
            }
            //==========================CAPACITY======================================//

            size_t size() const { return this->taille; }
           // size_t max_size() const { return 4611686018427387903; } VOIR ALLOCATOR


            bool empty() const
            {
                return size()==0;
            }

            size_t capacity() const
            {
                return max_size();
            }

            void reserve(size_t t)
            {
                for(;_capacity <= t; _capacity <<=1);

                T* tmp_tab = tab;

                tab = new T[_capacity];
                for(size_t i=0 ; i<size() ; i++)
                    tab[i] = tmp_tab[i];

                delete[] tmp_tab;
            }

            //==========================ITERATORS=====================================//
            
            iterator begin()
            {
                iterator it = &(*this)[0];
                return it;
            }

            const_iterator begin() const
            {
                const_iterator it = &(*this)[0];
                return it;
            }

            iterator end()
            {
                iterator it = &(*this)[size()];
                return it;
            }

            const_iterator end() const
            {
                const_iterator it = &(*this)[size()];
                return it;
            }
            reference operator[](size_t idx)
            {
                return tab[idx];
            }
            
            // void swap(vector& v)
            // {
            //     T* tab_v = v.tab;
            //     size_t taille_v = v.taille;
            //     size_t _capacity_v = v._capacity;

            //     v.tab = tab;
            //     v.taille = taille;
            //     v._capacity = _capacity;

            //     tab = tab_v;
            //     taille = taille_v;
            //     _capacity = _capacity_v;
            // }

            // const_reference operator[](size_t idx) const
            // {
            //     assert(idx <= size());
            //     return tab[idx];
            // }

            // reference back()
            // {
            //     reference ref = (*this)[size()-1];
            //     return ref;
            // }

            // const_reference back() const
            // {
            //     const_reference ref = (*this)[size()-1];
            //     return ref;
            // }

            // reference front()
            // {
            //     reference ref = (*this)[0];
            //     return ref;
            // }

            // const_reference front() const
            // {
            //     const_reference ref = (*this)[0];
            //     return ref;
            // }

            // iterator insert(iterator pos, const T& x)
            // {
            //     assert(pos >= tab && pos <= (tab+size()));

            //     size_t idx = pos - tab;
            //     taille++;
            //     reserve(size());

            //     T* tab_tmp = tab;
            //     tab = new T[_capacity];

            //     for(size_t i=0 ; i<idx;i++)
            //         tab[i] = tab_tmp[i];
            //     tab[idx] = x;
            //     for(size_t i=idx+1 ; i<size() ;i++)
            //         tab[i] = tab_tmp[i-1];

            //     delete[] tab_tmp;
            //     return &(*this)[idx];
            // }

            // iterator insert(iterator pos, size_t n, const T& x)
            // {
            //     iterator it = pos;
            //     for(size_t i=0 ; i<n ; i++)
            //         it = insert(it, x);
            //     return it;
            // }

            // void push_back(const T& x)
            // {
            //     insert(end(), x);
            // }

            // iterator erase(iterator pos)
            // {
            //     assert(pos >= tab && pos <= tab+size());

            //     if(pos == tab+size())
            //         pos = tab+size()-1;

            //     size_t idx = pos-tab;

            //     taille--;
            //     for(size_t i=idx;i<size();i++)
            //         (*this)[i] = (*this)[i+1];
            //     return &(*this)[idx];
            // }

            // iterator erase(iterator first, iterator last)
            // {
            //     if((size_t)last < (size_t)first)
            //     {
            //         iterator tmp = last;
            //         last = first;
            //         first = tmp;
            //     }
            //     iterator it = first;
            //     for(size_t i=0 ; i<(unsigned)(last-first) ; i++)
            //         it = erase(first);
            //     return it;
            // }

            // void pop_back()
            // {
            //     erase(end()-1);
            // }

            // void clear()
            // {
            //     erase(begin(), end());
            // }

            // void resize(size_t n, const T& x = T())
            // {
            //     if(n < size())
            //         erase(begin() + n, end());
            //     else
            //         insert(end(), n - size(), x);
            // }
    };
}

#endif