#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"
#import "ASPLinkElement.h"


@protocol ASPNames
@end

@interface ASPNames : ASPObject


@property(nonatomic) NSNumber* count;

@property(nonatomic) NSArray<ASPLinkElement>* nameList;

@property(nonatomic) ASPLink* link;

@end
