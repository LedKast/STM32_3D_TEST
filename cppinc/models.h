#ifndef _MODELS_H_
#define _MODELS_H_
/*
// �������
double ver[] = {
			2, 2, 6, 6, 4,
			0, 0, 0, -5, 5.5,
			4, 2, 2, 4, 3,
			1, 1, 1, 1, 1
	};

// ��������� (������������)
int fa[] = {
			1, 2, 4,
			2, 3, 4,
			1, 2, 5,
			2, 3, 5,
			3, 4, 5,
			4, 1, 5,
			1, 3, 2
		};

// ������ �����
int ima[] = {2, 4};*/

// ���
// �������
double ver[] = {
			0, 4, 0, 0, 4, 0, 4, 4,
			0, 0, 6, 0, 4, 4, 0, 2,
			0, 0, 0, 4, 0, 4, 4, 4,
			1, 1, 1, 1, 1, 1, 1, 1
	};

// ��������� (������������)
int fa[] = {
			1, 3, 2,
			2, 5, 3,

			1, 4, 3,
			4, 3, 6,

			6, 4, 7,
			7, 8, 6,

			8, 7, 2,
			2, 8, 5,

			1, 2, 3
		};

// ������ �����
//3, 2, 1, 5, 4, 3, 6, 1, 4, 8, 6, 7, 8, 2, 5, 7, 6, 5, 3, 8, 1, 7, 4, 2
int ima[] = {
		8, 2,
		4, 3,
		3, 2
};

#endif
