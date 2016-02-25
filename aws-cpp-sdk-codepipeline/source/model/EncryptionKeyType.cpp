/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/codepipeline/model/EncryptionKeyType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int KMS_HASH = HashingUtils::HashString("KMS");

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
namespace EncryptionKeyTypeMapper
{


EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KMS_HASH)
  {
     return EncryptionKeyType::KMS;
  }
  return EncryptionKeyType::NOT_SET;
}

Aws::String GetNameForEncryptionKeyType(EncryptionKeyType enumValue)
{
  switch(enumValue)
  {
  case EncryptionKeyType::KMS:
    return "KMS";
  default:
    return "";
  }
}

} // namespace EncryptionKeyTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws