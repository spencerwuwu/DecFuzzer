#ifndef s103r2_H
#define s103r2_H

#include "w2c2_base.h"

typedef struct s103r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s103r2Instance;

void f0(s103r2Instance*);

void f1(s103r2Instance*);

U32 f2(s103r2Instance*);

void f3(s103r2Instance*,U32);

void f4(s103r2Instance*,U32);

void s103r2____wasm_call_ctors(s103r2Instance*i);

void s103r2____wasm_apply_data_relocs(s103r2Instance*i);

U32 s103r2_func_1(s103r2Instance*i);

void s103r2_call_cb(s103r2Instance*i,U32 l0);

void s103r2Instantiate(s103r2Instance* instance, void* resolve(const char* module, const char* name));

void s103r2FreeInstance(s103r2Instance* instance);

#endif /* s103r2_H */

