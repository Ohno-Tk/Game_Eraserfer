/*=============================================================================

		���b�V���E�H�[��[ MeshWall.h ]

-------------------------------------------------------------------------------

	���@�쐬��
		2016/11/02
-------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------
	��d�C���N���[�h�h�~
-----------------------------------------------------------------------------*/
#ifndef _MESHWALL_H_
#define _MESHWALL_H_

/*-----------------------------------------------------------------------------
	�萔��`
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	��
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	�\����
-----------------------------------------------------------------------------*/
typedef struct
{
	WORLD World;	//	���[���h�ϊ��p�ϐ�
	bool Use;	//	�g�p�t���O

}MESHWALL;

/*-----------------------------------------------------------------------------
	�v���g�^�C�v�錾
-----------------------------------------------------------------------------*/
void InitMeshWall( void );		//	���b�V���E�H�[���̏�����
void UninitMeshWall( void );	//	���b�V���E�H�[���̏I��
void UpdateMeshWall( void );	//	���b�V���E�H�[���̍X�V
void DrawMeshWall( void );		//	���b�V���E�H�[���̕`��

MESHWALL *GetMeshWall( void );	//	���b�V���E�H�[�����擾

#endif