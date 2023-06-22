#ifndef s284retdec_H
#define s284retdec_H

#include "w2c2_base.h"

typedef struct s284retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s284retdecInstance;

void f0(s284retdecInstance*);

void f1(s284retdecInstance*);

U32 f2(s284retdecInstance*);

void f3(s284retdecInstance*,U32);

U32 f4(s284retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s284retdecInstance*,U32,U32,U32,U32,U32);

void f6(s284retdecInstance*,U32);

void f7(s284retdecInstance*,U32,U32,U32);

void f8(s284retdecInstance*,U32,U32,U32);

void s284retdec____wasm_call_ctors(s284retdecInstance*i);

void s284retdec____wasm_apply_data_relocs(s284retdecInstance*i);

U32 s284retdec_func_1(s284retdecInstance*i);

void s284retdec_call_cb(s284retdecInstance*i,U32 l0);

void s284retdecInstantiate(s284retdecInstance* instance, void* resolve(const char* module, const char* name));

void s284retdecFreeInstance(s284retdecInstance* instance);

#endif /* s284retdec_H */

