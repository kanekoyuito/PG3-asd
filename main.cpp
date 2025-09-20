#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	// ���߂�1970�N�̉w�����X�g
	list <const char*> eki_list{ "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970�N
	printf("1970�N\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}


	// 2019�N (�����闢���ǉ�����Ă���)
	printf("\n2019�N\n");
	for (auto it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		// �uNippori�v�̌�ɁuNishi-Nippori�v��ǉ�
		if (std::string(*it_f) == "Nippori") {
			++it_f; // Nippori�̎��̈ʒu�Ɉړ�
			it_f = eki_list.insert(it_f, "Nishi-Nippori");
			std::cout << *it_f << endl;
		}
		std::cout << *it_f << endl;
	}

	// 2022�N (���փQ�[�g�E�F�C���ǉ�����Ă���)
	printf("\n2022�N\n");
	for (auto it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		// �uSinagawa�v�̌�ɁuTakanawa Gateway�v��ǉ�
		if (std::string(*it_f) == "Sinagawa") {
			++it_f; // Sinagawa�̎��Ɉړ�
			it_f = eki_list.insert(it_f, "Takanawa Gateway");
			std::cout << *it_f << endl;
		}
		std::cout << *it_f << endl;
	}

	return 0;
}
