#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPLink.h"
#import "ASPLinkElement.h"


@protocol ASPCell
@end

@interface ASPCell : ASPObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* row;

@property(nonatomic) NSNumber* column;

@property(nonatomic) NSString* value;

@property(nonatomic) NSString* type;

@property(nonatomic) NSString* formula;

@property(nonatomic) NSNumber* isFormula;

@property(nonatomic) NSNumber* isMerged;

@property(nonatomic) NSNumber* isArrayHeader;

@property(nonatomic) NSNumber* isInArray;

@property(nonatomic) NSNumber* isErrorValue;

@property(nonatomic) NSNumber* isInTable;

@property(nonatomic) NSNumber* isStyleSet;

@property(nonatomic) NSString* htmlString;

@property(nonatomic) ASPLinkElement* style;

@property(nonatomic) NSString* worksheet;

@property(nonatomic) ASPLink* link;

@end
