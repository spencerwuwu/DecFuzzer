#ifndef s344retdec_H
#define s344retdec_H

#include "w2c2_base.h"

typedef struct s344retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s344retdecInstance;

void f0(s344retdecInstance*);

void f1(s344retdecInstance*);

U32 f2(s344retdecInstance*);

void f3(s344retdecInstance*,U32);

U32 f4(s344retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s344retdecInstance*,U32,U32,U32,U32,U32);

void f6(s344retdecInstance*,U32);

void f7(s344retdecInstance*,U32,U32,U32);

void f8(s344retdecInstance*,U32,U32,U32);

void s344retdec____wasm_call_ctors(s344retdecInstance*i);

void s344retdec____wasm_apply_data_relocs(s344retdecInstance*i);

U32 s344retdec_func_1(s344retdecInstance*i);

void s344retdec_call_cb(s344retdecInstance*i,U32 l0);

void s344retdecInstantiate(s344retdecInstance* instance, void* resolve(const char* module, const char* name));

void s344retdecFreeInstance(s344retdecInstance* instance);

#endif /* s344retdec_H */

