#ifndef s697retdec_H
#define s697retdec_H

#include "w2c2_base.h"

typedef struct s697retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s697retdecInstance;

void f0(s697retdecInstance*);

void f1(s697retdecInstance*);

U32 f2(s697retdecInstance*);

void f3(s697retdecInstance*,U32);

U32 f4(s697retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s697retdecInstance*,U32,U32,U32,U32,U32);

void f6(s697retdecInstance*,U32);

void f7(s697retdecInstance*,U32,U32,U32);

void f8(s697retdecInstance*,U32,U32,U32);

void s697retdec____wasm_call_ctors(s697retdecInstance*i);

void s697retdec____wasm_apply_data_relocs(s697retdecInstance*i);

U32 s697retdec_func_1(s697retdecInstance*i);

void s697retdec_call_cb(s697retdecInstance*i,U32 l0);

void s697retdecInstantiate(s697retdecInstance* instance, void* resolve(const char* module, const char* name));

void s697retdecFreeInstance(s697retdecInstance* instance);

#endif /* s697retdec_H */

