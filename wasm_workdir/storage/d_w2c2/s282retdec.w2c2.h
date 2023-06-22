#ifndef s282retdec_H
#define s282retdec_H

#include "w2c2_base.h"

typedef struct s282retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s282retdecInstance;

void f0(s282retdecInstance*);

void f1(s282retdecInstance*);

U32 f2(s282retdecInstance*);

void f3(s282retdecInstance*,U32);

U32 f4(s282retdecInstance*,U32,U32,U32);

void f5(s282retdecInstance*,U32,U32,U32,U32,U32);

void f6(s282retdecInstance*,U32);

void f7(s282retdecInstance*,U32,U32,U32);

void f8(s282retdecInstance*,U32,U32,U32);

void s282retdec____wasm_call_ctors(s282retdecInstance*i);

void s282retdec____wasm_apply_data_relocs(s282retdecInstance*i);

U32 s282retdec_func_1(s282retdecInstance*i);

void s282retdec_call_cb(s282retdecInstance*i,U32 l0);

void s282retdecInstantiate(s282retdecInstance* instance, void* resolve(const char* module, const char* name));

void s282retdecFreeInstance(s282retdecInstance* instance);

#endif /* s282retdec_H */

