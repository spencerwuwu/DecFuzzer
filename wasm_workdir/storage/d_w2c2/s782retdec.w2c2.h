#ifndef s782retdec_H
#define s782retdec_H

#include "w2c2_base.h"

typedef struct s782retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s782retdecInstance;

void f0(s782retdecInstance*);

void f1(s782retdecInstance*);

U32 f2(s782retdecInstance*);

void f3(s782retdecInstance*,U32);

U32 f4(s782retdecInstance*,U32,U32,U32,U32);

void f5(s782retdecInstance*,U32,U32,U32,U32,U32);

void f6(s782retdecInstance*,U32);

void f7(s782retdecInstance*,U32,U32,U32);

void f8(s782retdecInstance*,U32,U32,U32);

void s782retdec____wasm_call_ctors(s782retdecInstance*i);

void s782retdec____wasm_apply_data_relocs(s782retdecInstance*i);

U32 s782retdec_func_1(s782retdecInstance*i);

void s782retdec_call_cb(s782retdecInstance*i,U32 l0);

void s782retdecInstantiate(s782retdecInstance* instance, void* resolve(const char* module, const char* name));

void s782retdecFreeInstance(s782retdecInstance* instance);

#endif /* s782retdec_H */

