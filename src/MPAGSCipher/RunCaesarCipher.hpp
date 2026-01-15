#ifndef MPAGSCIPHER_RUNCAESARCIPHER_HPP
#define MPAGSCIPHER_RUNCAESARCIPHER_HPP

#include <string>

/**
 * \file RunCaesarCipher.hpp
 * \brief Contains the declaration of the RunCaesarCipher function
 */

/**
 * \brief Encrypt or decrypt the provided text using the Caesar cipher with the given key
 *
 * \param inputText The text to encrypt or decrypt
 * \param key The key to use in the cipher
 * \param encrypt Whether to encrypt (true) or decrypt (false) the input text
 * \return The result of applying the cipher to the input text
 */
std::string runCaesarCipher(const std::string& inputText, const std::size_t key,
                            const bool encrypt);

#endif
