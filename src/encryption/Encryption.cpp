#include "Encryption.h"
#include <openssl/evp.h>
#include <openssl/aes.h>
#include <vector>

std::string Encryption::encrypt(const std::string &data, const std::string &key) {
    // AES encryption logic
    // Placeholder code (replace with actual encryption)
    return "encrypted_" + data;
}

std::string Encryption::decrypt(const std::string &data, const std::string &key) {
    // AES decryption logic
    // Placeholder code (replace with actual decryption)
    return data.substr(10);  // Remove "encrypted_"
}
