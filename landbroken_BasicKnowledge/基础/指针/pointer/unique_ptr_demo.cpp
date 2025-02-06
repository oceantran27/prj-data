#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include <memory>
#include <string>
#include <list>

#include "ptr.h"

using namespace std;

typedef unsigned char cv_pixel_format;

/// ͼʽ
typedef struct cv_image_t {
	unsigned char *data;            ///< ͼָ
	cv_pixel_format pixel_format;   ///< ظʽ
	int width;                      ///< (Ϊλ)
	int height;                     ///< ߶(Ϊλ)
	int stride;                     ///< , ÿռֽ
} cv_image_t;

void cv_image_release(cv_image_t* image) {
	if (image == nullptr) {
		return;
	}
	delete[] image->data;
	delete image;
	return;
}

int unique_demo() {
	/*ָĴ*/  
	unique_ptr<int> u_i; //ָ
	u_i.reset(new int(3)); //"󶨡̬  
	unique_ptr<int> u_i2(new int(4));//ʱָ̬
	//unique_ptr<T, D> u(d);	//unique_ptr,ִΪTĶΪDĶdĬϵɾdelete

	/*Ȩı仯*/
	//std::unique_ptr<int>p2 = u_i2;// 
	int *p_i = u_i2.release(); //ͷȨ  
	unique_ptr<string> u_s(new string("abc"));
	unique_ptr<string> u_s2 = std::move(u_s); //Ȩת(ͨƶ)u_sȨתƺ󣬱Чָ
	unique_ptr<string> u_s3(new string("def"));
	unique_ptr<string> u_s4;
	u_s4.reset(u_s3.release());//Ȩת
	u_s4.reset(new string("ghi"));//ͷԭĶ󣬷һµָ

	/**/
	u_s2.swap(u_s4);//

	/*ͷڴ*/
	u_i.reset();// empty
	u_i2.reset();// empty
	u_s.reset();//תȨЧͷ
	u_s2 = nullptr;//ʽָͬʱָΪָ롣൱u_i.reset();
	//u_s3ѾתȨͷ
	u_s4 = nullptr;

	/**Զɾ
	 * why:Ķֻܽ delete ɾʱôҪԶɾˡл
	 * how:дһɾָĲȻʵӦͷŲɾ unique_ptr 
	 */

	return E_OK;
}