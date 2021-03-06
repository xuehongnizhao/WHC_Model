//
//  NSObject+WHC_Model.h
//  WHC_Model<https://github.com/netyouli/WHC_DataModel>
//
//  Created by WHC on 16/7/13.
//  Copyright © 2016年 whc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

// VERSION:(1.1.0)
#import <Foundation/Foundation.h>

@interface NSObject (WHC_Model)
#pragma mark - json转模型对象 Api -

/** 说明: 把json数组解析为模型对象数组
 *@param array :json数组
 *@return 模型对象数组
 */
+ (NSArray*)whc_ModelWithArray:(NSArray*)array;

/** 说明: 把json数组解析为模型对象数组
 *@param array :json数组
 *@return 模型对象数组
 */

+ (NSArray*)whc_ModelWithArray:(NSArray*)array classPrefix:(NSString *)prefix;

/** 说明:把json字典解析为模型对象
 *@param dictionary :json字典
 *@return 模型对象
 */
+ (id)whc_ModelWithDictionary:(NSDictionary*)dictionary;

/** 说明:把json字典解析为模型对象
 *@param dictionary :json字典
 *@param prefix :自定义模型类前缀名称
 *@return 模型对象
 */

+ (id)whc_ModelWithDictionary:(NSDictionary*)dictionary classPrefix:(NSString *)prefix;

/** 说明:把json解析为模型对象
 *@param json :json 字符串
 *@return 模型对象
 */
+ (id)whc_ModelWithJson:(NSString *)json;

/** 说明:把json解析为模型对象
 *@param json :json 字符串
 *@param keyPath json key的路径
 *@return 模型对象
 */
+ (id)whc_ModelWithJson:(NSString *)json keyPath:(NSString *)keyPath;

/** 说明:把json解析为模型对象
 *@param json :json 字符串
 *@param prefix :自定义模型类前缀名称
 *@return 模型对象
 */

+ (id)whc_ModelWithJson:(NSString *)json classPrefix:(NSString *)prefix;

/** 说明:把json解析为模型对象
 *@param jsonData :jsonData json数据对象
 *@return 模型对象
 */
+ (id)whc_ModelWithJsonData:(NSData *)jsonData;

/** 说明:把json解析为模型对象
 *@param jsonData :jsonData json数据对象
 *@param keyPath :json key的路径
 *@return 模型对象
 */

+ (id)whc_ModelWithJsonData:(NSData *)jsonData keyPath:(NSString *)keyPath;

/** 说明:把json解析为模型对象
 *@param jsonData :jsonData json数据对象
 *@param prefix :自定义模型类前缀名称
 *@return 模型对象
 */
+ (id)whc_ModelWithJsonData:(NSData *)jsonData classPrefix:(NSString *)prefix;

#pragma mark - 模型对象转json Api -

/** 说明:把模型对象转换为字典
 *@return 字典对象
 */

- (NSDictionary *)whc_Dictionary;

/** 说明:把模型对象转换为json字符串
 *@return json字符串
 */

- (NSString *)whc_Json;
@end
